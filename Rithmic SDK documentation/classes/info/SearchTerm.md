> **Namespace:** `RApi`

# RApi::SearchTerm

Public Attributes | List of all members  RApi::SearchTerm Class Reference

`#include <RApiPlus.h>`

| Public Attributes |
| --- |
| bool | bCaseSensitive |
|  |
| SearchField | eField |
|  |
| SearchOperator | eOperator |
|  |
| tsNCharcb | sTerm |
|  |

## Detailed Description

This class represents a search term for REngine::searchInstrument().

One or more instances of the SearchTerm class is passed into REngine::searchInstrument() to specify a filter when searching for instruments.
## Member Data Documentation

## bCaseSensitive

| RApi::SearchTerm::bCaseSensitive |
| --- |

Specifies whether this search term is case sensitive or not.
## eField

| RApi::SearchTerm::eField |
| --- |

Specifies the field(s) to be searched. Please note that this enumeration is not a bit-mask. To specify matching against any field, use SearchField::Any. To specify multiple (but not all) fields use multiple SearchTerms.
## eOperator

| RApi::SearchTerm::eOperator |
| --- |

Specifies the matching operation to be used when matching the user provided search string (SearchTerm::sTerm) to the field (SearchTerm::eField).
## sTerm

| RApi::SearchTerm::sTerm |
| --- |

Specifies the string to be matched for this search term.
