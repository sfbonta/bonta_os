#include "utils.h"

UINT8 API MemoryCompare(CONST IN VOID *LhsBuffer, CONST IN VOID *RhsBuffer, CONST IN UINT64 BufferLength)
{
    CONST UINT8 *LhsUint8Buffer = (CONST UINT8 *)LhsBuffer;
    CONST UINT8 *RhsUint8Buffer = (CONST UINT8 *)RhsBuffer;

    for (UINT64 i = 0; i < BufferLength; ++i)
    {
        if (LhsUint8Buffer[i] != RhsUint8Buffer[i])
        {
            return LhsUint8Buffer[i] - RhsUint8Buffer[i];
        }
    }

    return 0;
}

VOID API MemoryCopy(CONST IN VOID *Source, OUT VOID *Destination, CONST IN UINT64 Size)
{
    CONST UINT8 *SourceBuffer = (CONST UINT8 *)Source;
    UINT8 *DestinationBuffer = (UINT8 *)Destination;

    for (UINT64 i = 0; i < Size; ++i)
    {
        DestinationBuffer[i] = SourceBuffer[i];
    }
}

VOID API MemorySet(IN OUT VOID *Buffer, IN CONST UINT8 Value, IN CONST UINT64 Size)
{
    UINT8 *Uint8Buffer = (UINT8 *)Buffer;

    for (UINT64 i = 0; i < Size; ++i)
    {
        Uint8Buffer[i] = Value;
    }
}

VOID API Char8ToChar16(CONST IN CHAR8 *Source, OUT CHAR16 *Destination, IN CONST UINT64 Length)
{
    for (UINT64 i = 0; i < Length; ++i)
    {
        Destination[i] = Source[i];
    }
    Destination[Length] = u'\0';
}

VOID API StringReverse(IN OUT CHAR16 *String, IN CONST UINT64 StringLength)
{
    for (UINT64 i = 0; i < StringLength / 2; ++i)
    {
        CHAR16 Charater = String[i];
        String[i] = String[StringLength - i - 1];
        String[StringLength - i - 1] = Charater;
    }
}

VOID API SplitPath(IN CONST CHAR16 *Path, OUT CHAR16 *DirectoryName, OUT CHAR16 *RestOfThePath)
{
    UINT64 i = 0;
    UINT64 j = 0;
    for (i = 0; (u'/' != Path[i]) && (u'\0' != Path[i]); ++i)
    {
        DirectoryName[i] = Path[i];
    }
    DirectoryName[i] = '\0';
    if (u'\0' != Path[i])
    {
        ++i;
    }
    for (; u'\0' != Path[i]; ++i)
    {
        RestOfThePath[j] = Path[i];
        j++;
    }
    RestOfThePath[j] = '\0';
}

VOID API StringCopy(IN CONST CHAR16 *Source, OUT CHAR16 *Destination)
{
    UINT64 i = 0;
    for (; u'\0' != Source[i]; ++i)
    {
        Destination[i] = Source[i];
    }
    Destination[i] = Source[i];
}
