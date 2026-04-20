> **Namespace:** `RApi`

# RApi::PriceIncrRow

Public Member Functions | Public Attributes | List of all members  RApi::PriceIncrRow Class Reference

`#include <RApiPlus.h>`

| Public Member Functions |
| --- |
| int | dump (int *aiCode) |
|  |
|  | PriceIncrRow () |
|  |
| virtual | ~PriceIncrRow () |
|  |

| Public Attributes |
| --- |
| double | dFirstPrice |
|  |
| double | dLastPrice |
|  |
| double | dPriceIncr |
|  |
| int | iFirstOperator |
|  |
| int | iLastOperator |
|  |
| int | iPrecision |
|  |

## Detailed Description

An instance of this class represents the minimum price increment for a price range.

A PriceIncrRow object is used to indicate a minimum price increment for a range of prices. The range is defined by an upper and/or lower bound on the price. A value of OPER_NONE for an operator means that there is no constraint. When the operator is OPER_NONE, the corresponding price is not valid and should not be examined.

Therefore, if both operators are OPER_NONE, there are no constraints on the price range, and the minimum price increment is constant for all prices. For example, if the minimum price increment is 0.25 for all prices, the instance will have the following values :
-  PriceIncrRow::dPriceIncr = 0.25
-  PriceIncrRow::iPrecision = 2
-  PriceIncrRow::iFirstOperator = RApi::OP_NONE
-  PriceIncrRow::iLastOperator = RApi::OP_NONE

If one operator is OPER_NONE and the other is not, there is a single constraint. For example, if the minimum price increment is 0.10 when the price of the instrument falls below -3.00, then the instance will have the followin gvalues :
-  PriceIncrRow::dPriceIncr = 0.10
-  PriceIncrRow::iPrecision = 2
-  PriceIncrRow::iFirstOperator = RApi::OP_LESS_THAN
-  PriceIncrRow::dFirstPrice = -3.00
-  PriceIncrRow::iLastOperator = RApi::OP_NONE

Another example is if the minimum price increment is 0.10 when the price of the instrument is above 3.00, the instance may have the following values :
-  PriceIncrRow::dPriceIncr = 0.10
-  PriceIncrRow::iPrecision = 2
-  PriceIncrRow::iFirstOperator = RApi::OP_NONE
-  PriceIncrRow::iLastOperator = RApi::OP_GREATER_THAN
-  PriceIncrRow::dLastPrice = 3.0

Finally, if both operators are not OPER_NONE, then there are two constraints that apply to the current price increment. For example, if the minimum price increment is 0.05 when the price is greater or equal to -3.00 and less than or equal to 3.00, the instance may have the following values :
-  PriceIncrRow::dPriceIncr = 0.05
-  PriceIncrRow::iPrecision = 2
-  PriceIncrRow::iFirstOperator = RApi::OP_GREATER_THAN_OR_EQUAL
-  PriceIncrRow::dFirstPrice = -3.00
-  PriceIncrRow::iLastOperator = RApi::OP_LESS_THAN_OR_EQUAL
-  PriceIncrRow::dLastPrice = 3.00

## Constructor & Destructor Documentation

## PriceIncrRow()

| PriceIncrRow::PriceIncrRow | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This constructor initializes all of the members. The pData of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM and the iDataLen of each tsNCharcb is set to MNM_EMPTY_DATA_ITEM_LEN. Integer members and double members are initialized to zero. Boolean members are set to false. Pointers (and pointers to arrays) are set to NULL.
## ~PriceIncrRow()

| PriceIncrRow::~PriceIncrRow | ( |  | ) |  |
| --- | --- | --- | --- | --- |

| PriceIncrRow::~PriceIncrRow | ( |  | ) |  |
| --- | --- | --- | --- | --- |

This destructor will not deallocate memory associated with internal pointers such as the pData of any tsNCharcbs.
## Member Function Documentation

## dump()
    **
| int PriceIncrRow::dump | ( | int * | aiCode | ) |  |
| --- | --- | --- | --- | --- | --- |

This routine will print the current values of the object to stdout.
## Member Data Documentation

## dFirstPrice

| PriceIncrRow::dFirstPrice |
| --- |

A price that applies in conjunction with the dFirstPrice.
## dLastPrice

| PriceIncrRow::dLastPrice |
| --- |

A price that applies in conjunction with the iLastOperator.
## dPriceIncr

| PriceIncrRow::dPriceIncr |
| --- |

Minimum price increment.
## iFirstOperator

| PriceIncrRow::iFirstOperator |
| --- |

An operator that applies in conjunction with the dFirstPrice.
## iLastOperator

| PriceIncrRow::iLastOperator |
| --- |

An operator that applies in conjunction with the dLastPrice.
## iPrecision

| PriceIncrRow::iPrecision |
| --- |

Precision of the minimum price increment. The precision is provided to clarify the value of the dPriceIncr.
