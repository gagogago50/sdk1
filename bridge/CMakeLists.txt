cmake_minimum_required(VERSION 3.15)
project(RithmicDTCBridge CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# ImGui configuration via FetchContent
include(FetchContent)
FetchContent_Declare(
    imgui
    GIT_REPOSITORY https://github.com/ocornut/imgui.git
    GIT_TAG v1.90.1
)
FetchContent_MakeAvailable(imgui)

set(RITHMIC_SDK_DIR "H:/DORIAN/13.7.0.0")

# Include directories
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${RITHMIC_SDK_DIR}/include
    ${imgui_SOURCE_DIR}
    ${imgui_SOURCE_DIR}/backends
)

# Source files
set(SOURCES
    src/main.cpp
    src/RithmicClient.cpp
    src/DTCServer.cpp
    src/Translator.cpp
    src/Utils.cpp
    ${imgui_SOURCE_DIR}/imgui.cpp
    ${imgui_SOURCE_DIR}/imgui_draw.cpp
    ${imgui_SOURCE_DIR}/imgui_tables.cpp
    ${imgui_SOURCE_DIR}/imgui_widgets.cpp
    ${imgui_SOURCE_DIR}/backends/imgui_impl_win32.cpp
    ${imgui_SOURCE_DIR}/backends/imgui_impl_dx11.cpp
)

# Executable
add_executable(${PROJECT_NAME} ${SOURCES})

# Libraries
set(RITHMIC_LIB_DIR "${RITHMIC_SDK_DIR}/win10/lib")
target_link_directories(${PROJECT_NAME} PRIVATE ${RITHMIC_LIB_DIR})

target_link_libraries(${PROJECT_NAME} PRIVATE
    RApiPlus_md64
    OmneStreamEngine_md64
    OmneChannel_md64
    OmneEngine_md64
    api_md64
    apistb_md64
    kit_md64
    libssl_md64
    libcrypto_md64
    zlib_md64
    ws2_32
)

# DTC and ImGui require some standard networking and system libs on Windows
if(WIN32)
    target_link_libraries(${PROJECT_NAME} PRIVATE wsock32 ws2_32 d3d11 d3dcompiler dwmapi Iphlpapi Crypt32)
endif()
