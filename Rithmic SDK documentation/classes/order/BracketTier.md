> **Namespace:** `RApi`

# RApi::BracketTier

Public Member Functions | Public Attributes | List of all members  RApi::BracketTier Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
|  | BracketTier () |
|  |
|  | BracketTier (const int iTicksIn, const long long llQtyIn, const long long llQtyReleasedIn) |
|  |
| virtual | ~BracketTier () |
|  |

| Public Attributes |
| --- |
| int | iTicks |
|  |
| long long | llQty |
|  |
| long long | llQtyReleased |
|  |

## Detailed Description

This class represents one exit tier of a bracket order.
**See also**
  BracketInfo
## Constructor & Destructor Documentation

## BracketTier() [1/2]

| BracketTier::BracketTier | ( | const int | iTicksIn, |
| --- | --- | --- | --- |
|  |  | const long long | llQtyIn, |
|  |  | const long long | llQtyReleasedIn |
|  | ) |  |  |

This constructor initializes all of the members using the similarly named parameters.
## BracketTier() [2/2]

| BracketTier::BracketTier | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members to zero.
## ~BracketTier()

| BracketTier::~BracketTier | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| BracketTier::~BracketTier | ( |  | ) |  |
| --- | --- | --- | --- | --- |

## Member Data Documentation

## iTicks

| BracketTier::iTicks |
| --- |

Offset, in ticks, of this exit tier in relation to the entry order.
## llQty

| BracketTier::llQty |
| --- |

Order quantity to be released at this tick offset.
## llQtyReleased

| BracketTier::llQtyReleased |
| --- |

Order quantity already released at this tick offset.
