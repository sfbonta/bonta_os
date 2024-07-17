#ifndef _UTILS_H_
#define _UTILS_H_

#include "platform_types.h"

UINT8 API MemoryCompare(CONST IN VOID *LhsBuffer, CONST IN VOID *RhsBuffer, CONST IN UINT64 BufferLength);

VOID API MemoryCopy(CONST IN VOID *Source, OUT VOID *Destination, CONST IN UINT64 Size);

VOID API MemorySet(IN OUT VOID *Buffer, IN CONST UINT8 Value, IN CONST UINT64 Size);

VOID API Char8ToChar16(CONST IN CHAR8 *Source, OUT CHAR16 *Destination, IN CONST UINT64 Length);

VOID API StringReverse(IN OUT CHAR16 *String, IN CONST UINT64 StringLength);

VOID API SplitPath(IN CONST CHAR16 *Path, OUT CHAR16 *DirectoryName, OUT CHAR16 *RestOfThePath);

VOID API StringCopy(IN CONST CHAR16* Source, OUT CHAR16* Destination);

#endif /* _UTILS_H_ */
