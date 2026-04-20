#define WIN32_LEAN_AND_MEAN
#include <winsock2.h>
#include <windows.h>
#include <d3d11.h>
#include <tchar.h>
#include "imgui.h"
#include "imgui_impl_win32.h"
#include "imgui_impl_dx11.h"

#include "BridgeConfig.h"
#include "Utils.h"
#include "RithmicClient.h"
#include "DTCServer.h"
#include "Translator.h"

// Data
static ID3D11Device*            g_pd3dDevice = nullptr;
static ID3D11DeviceContext*     g_pd3dDeviceContext = nullptr;
static IDXGISwapChain*          g_pSwapChain = nullptr;
static UINT                     g_ResizeWidth = 0, g_ResizeHeight = 0;
static ID3D11RenderTargetView*  g_mainRenderTargetView = nullptr;

// Forward declarations of helper functions
bool CreateDeviceD3D(HWND hWnd);
void CleanupDeviceD3D();
void CreateRenderTarget();
void CleanupRenderTarget();
LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

// Main Bridge Components
RithmicClient* g_rithmicClient = nullptr;
DTCServer* g_dtcServer = nullptr;
Translator* g_translator = nullptr;

int main(int, char**)
{
    // Initialize components
    g_rithmicClient = new RithmicClient();
    g_dtcServer = new DTCServer();
    g_translator = new Translator(g_rithmicClient, g_dtcServer);
    
    g_rithmicClient->setTranslator(g_translator);
    g_dtcServer->setTranslator(g_translator);

    Utils::ConfigManager::LoadConfig("bridge_config.ini");

    // Create application window
    WNDCLASSEXW wc = { sizeof(wc), CS_CLASSDC, WndProc, 0L, 0L, GetModuleHandle(nullptr), nullptr, nullptr, nullptr, nullptr, L"RithmicDTCBridge", nullptr };
    ::RegisterClassExW(&wc);
    HWND hwnd = ::CreateWindowW(wc.lpszClassName, L"Sierra Chart <-> Rithmic Bridge", WS_OVERLAPPEDWINDOW, 100, 100, 800, 600, nullptr, nullptr, wc.hInstance, nullptr);

    // Initialize Direct3D
    if (!CreateDeviceD3D(hwnd))
    {
        CleanupDeviceD3D();
        ::UnregisterClassW(wc.lpszClassName, wc.hInstance);
        return 1;
    }

    ::ShowWindow(hwnd, SW_SHOWDEFAULT);
    ::UpdateWindow(hwnd);

    // Setup Dear ImGui context
    IMGUI_CHECKVERSION();
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO(); (void)io;
    io.ConfigFlags |= ImGuiConfigFlags_NavEnableKeyboard;

    ImGui::StyleColorsDark();

    // Setup Platform/Renderer backends
    ImGui_ImplWin32_Init(hwnd);
    ImGui_ImplDX11_Init(g_pd3dDevice, g_pd3dDeviceContext);

    // Main loop
    bool done = false;
    while (!done)
    {
        MSG msg;
        while (::PeekMessage(&msg, nullptr, 0U, 0U, PM_REMOVE))
        {
            ::TranslateMessage(&msg);
            ::DispatchMessage(&msg);
            if (msg.message == WM_QUIT)
                done = true;
        }
        if (done)
            break;

        // Handle window resize
        if (g_ResizeWidth != 0 && g_ResizeHeight != 0)
        {
            CleanupRenderTarget();
            g_pSwapChain->ResizeBuffers(0, g_ResizeWidth, g_ResizeHeight, DXGI_FORMAT_UNKNOWN, 0);
            g_ResizeWidth = g_ResizeHeight = 0;
            CreateRenderTarget();
        }

        // Start the Dear ImGui frame
        ImGui_ImplDX11_NewFrame();
        ImGui_ImplWin32_NewFrame();
        ImGui::NewFrame();

        // Build GUI
        ImGui::Begin("Bridge Configuration");
        
        static char userBuf[128] = "";
        static char passBuf[128] = "";
        static char sslBuf[512] = "";
        static bool initBufs = false;
        
        if (!initBufs) {
            strcpy_s(userBuf, g_Config.rithmicUser.c_str());
            strcpy_s(passBuf, g_Config.rithmicPassword.c_str());
            strcpy_s(sslBuf, g_Config.sslCertPath.c_str());
            initBufs = true;
        }

        ImGui::InputText("Username", userBuf, IM_ARRAYSIZE(userBuf));
        ImGui::InputText("Password", passBuf, IM_ARRAYSIZE(passBuf), ImGuiInputTextFlags_Password);
        ImGui::Checkbox("Save Login", &g_Config.saveLogin);
        
        ImGui::Separator();
        
        ImGui::InputText("SSL Cert Path", sslBuf, IM_ARRAYSIZE(sslBuf));

        ImGui::Separator();

        int dtcPort = g_Config.dtcPort;
        if (ImGui::InputInt("DTC Port (MD)", &dtcPort)) { g_Config.dtcPort = dtcPort; }
        
        ImGui::Checkbox("Separate Historical Port", &g_Config.separateHistoricalPort);
        if (g_Config.separateHistoricalPort) {
            int histPort = g_Config.dtcHistoricalPort;
            if (ImGui::InputInt("Historical Port", &histPort)) { g_Config.dtcHistoricalPort = histPort; }
        } else {
            g_Config.dtcHistoricalPort = g_Config.dtcPort;
        }

        ImGui::Separator();

        ImGui::Checkbox("Use MBO (Depth by Order)", &g_Config.useMBO);
        ImGui::Checkbox("Enable Tick Replay", &g_Config.enableTickReplay);

        ImGui::Separator();

        if (ImGui::Button("Connect")) {
            g_Config.rithmicUser = userBuf;
            g_Config.rithmicPassword = passBuf;
            g_Config.sslCertPath = sslBuf;
            
            Utils::ConfigManager::SaveConfig("bridge_config.ini");
            
            Utils::Logger::Log("Starting Bridge...");
            
            if (g_rithmicClient->init(g_Config) && g_rithmicClient->login()) {
                Utils::Logger::Log("Rithmic Client Init/Login Request Sent.");
                g_dtcServer->start(g_Config.dtcPort);
                Utils::Logger::Log("DTC Server Started on port " + std::to_string(g_Config.dtcPort));
            } else {
                Utils::Logger::Log("Failed to initialize/login Rithmic Client.");
            }
        }
        ImGui::SameLine();
        if (ImGui::Button("Disconnect")) {
            g_dtcServer->stop();
            g_rithmicClient->logout();
            Utils::Logger::Log("Disconnected.");
        }

        ImGui::End();

        // Log Window
        ImGui::Begin("Logs");
        auto logs = Utils::Logger::GetLogs();
        for (const auto& log : logs) {
            ImGui::TextUnformatted(log.c_str());
        }
        if (ImGui::GetScrollY() >= ImGui::GetScrollMaxY())
            ImGui::SetScrollHereY(1.0f);
        ImGui::End();

        // Rendering
        ImGui::Render();
        const float clear_color_with_alpha[4] = { 0.1f, 0.1f, 0.1f, 1.0f };
        g_pd3dDeviceContext->OMSetRenderTargets(1, &g_mainRenderTargetView, nullptr);
        g_pd3dDeviceContext->ClearRenderTargetView(g_mainRenderTargetView, clear_color_with_alpha);
        ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
        g_pSwapChain->Present(1, 0); // Present with vsync
    }

    // Cleanup
    ImGui_ImplDX11_Shutdown();
    ImGui_ImplWin32_Shutdown();
    ImGui::DestroyContext();

    CleanupDeviceD3D();
    ::DestroyWindow(hwnd);
    ::UnregisterClassW(wc.lpszClassName, wc.hInstance);

    delete g_translator;
    delete g_dtcServer;
    delete g_rithmicClient;

    return 0;
}

// Helper functions for DirectX 11
bool CreateDeviceD3D(HWND hWnd)
{
    DXGI_SWAP_CHAIN_DESC sd;
    ZeroMemory(&sd, sizeof(sd));
    sd.BufferCount = 2;
    sd.BufferDesc.Width = 0;
    sd.BufferDesc.Height = 0;
    sd.BufferDesc.Format = DXGI_FORMAT_R8G8B8A8_UNORM;
    sd.BufferDesc.RefreshRate.Numerator = 60;
    sd.BufferDesc.RefreshRate.Denominator = 1;
    sd.Flags = DXGI_SWAP_CHAIN_FLAG_ALLOW_MODE_SWITCH;
    sd.BufferUsage = DXGI_USAGE_RENDER_TARGET_OUTPUT;
    sd.OutputWindow = hWnd;
    sd.SampleDesc.Count = 1;
    sd.SampleDesc.Quality = 0;
    sd.Windowed = TRUE;
    sd.SwapEffect = DXGI_SWAP_EFFECT_DISCARD;

    UINT createDeviceFlags = 0;
    D3D_FEATURE_LEVEL featureLevel;
    const D3D_FEATURE_LEVEL featureLevelArray[2] = { D3D_FEATURE_LEVEL_11_0, D3D_FEATURE_LEVEL_10_0, };
    HRESULT res = D3D11CreateDeviceAndSwapChain(nullptr, D3D_DRIVER_TYPE_HARDWARE, nullptr, createDeviceFlags, featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice, &featureLevel, &g_pd3dDeviceContext);
    if (res == DXGI_ERROR_UNSUPPORTED)
        res = D3D11CreateDeviceAndSwapChain(nullptr, D3D_DRIVER_TYPE_WARP, nullptr, createDeviceFlags, featureLevelArray, 2, D3D11_SDK_VERSION, &sd, &g_pSwapChain, &g_pd3dDevice, &featureLevel, &g_pd3dDeviceContext);
    if (res != S_OK)
        return false;

    CreateRenderTarget();
    return true;
}

void CleanupDeviceD3D()
{
    CleanupRenderTarget();
    if (g_pSwapChain) { g_pSwapChain->Release(); g_pSwapChain = nullptr; }
    if (g_pd3dDeviceContext) { g_pd3dDeviceContext->Release(); g_pd3dDeviceContext = nullptr; }
    if (g_pd3dDevice) { g_pd3dDevice->Release(); g_pd3dDevice = nullptr; }
}

void CreateRenderTarget()
{
    ID3D11Texture2D* pBackBuffer;
    g_pSwapChain->GetBuffer(0, IID_PPV_ARGS(&pBackBuffer));
    g_pd3dDevice->CreateRenderTargetView(pBackBuffer, nullptr, &g_mainRenderTargetView);
    pBackBuffer->Release();
}

void CleanupRenderTarget()
{
    if (g_mainRenderTargetView) { g_mainRenderTargetView->Release(); g_mainRenderTargetView = nullptr; }
}

extern IMGUI_IMPL_API LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

LRESULT WINAPI WndProc(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    if (ImGui_ImplWin32_WndProcHandler(hWnd, msg, wParam, lParam))
        return true;

    switch (msg)
    {
    case WM_SIZE:
        if (wParam == SIZE_MINIMIZED)
            return 0;
        g_ResizeWidth = (UINT)LOWORD(lParam); // Queue resize
        g_ResizeHeight = (UINT)HIWORD(lParam);
        return 0;
    case WM_SYSCOMMAND:
        if ((wParam & 0xfff0) == SC_KEYMENU) // Disable ALT application menu
            return 0;
        break;
    case WM_DESTROY:
        ::PostQuitMessage(0);
        return 0;
    }
    return ::DefWindowProcW(hWnd, msg, wParam, lParam);
}
