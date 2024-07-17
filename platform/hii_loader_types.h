#ifndef _HII_LOADER_TYPES_H_
#define _HII_LOADER_TYPES_H_

#include "platform_types.h"

typedef struct _HII_LETTER_BITMAP
{
    UINT64 LetterWidth;
    UINT64 LetterHeight;
    UINT8* LetterBuffer;
} PACKED HII_LETTER_BITMAP;

typedef struct _HII_CHARACTERS
{
    HII_LETTER_BITMAP Letters[0x100];
} PACKED HII_CHARACTERS;

#endif /* _HII_LOADER_TYPES_H_ */
