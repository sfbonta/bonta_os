#ifndef _ELF_PARSER_H_
#define _ELF_PARSER_H_

#include "platform_types.h"

typedef STATUS (API *ALLOCATE_MEMORY)(OUT VOID** Buffer, IN CONST UINT64 Size);

STATUS API ParseElf64(IN VOID *FileBuffer, OUT VOID **ElfEntry, IN ALLOCATE_MEMORY AllocateMemory);

#endif /* _ELF_PARSER_H_ */
