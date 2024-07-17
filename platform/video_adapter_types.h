#ifndef _VIDEO_ADAPTER_TYPES_H_
#define _VIDEO_ADAPTER_TYPES_H_

#include "platform_types.h"

typedef struct _PIXEL_BITMASK
{
    UINT32 RedMask;
    UINT32 GreenMask;
    UINT32 BlueMask;
    UINT32 ReservedMask;
} PIXEL_BITMASK;

typedef struct _GRAPHICS_OUTPUT_MODE_INFORMATION
{
    UINT32 Version;
    UINT32 HorizontalResolution;
    UINT32 VerticalResolution;
    UINT8 PixelFormat;
    PIXEL_BITMASK PixelInformation;
    UINT32 PixelsPerScanLine;
} GRAPHICS_OUTPUT_MODE_INFORMATION;

typedef struct _VIDEO_ADAPTER
{
    GRAPHICS_OUTPUT_MODE_INFORMATION Info;
    UINT64 FrameBufferBase;
    UINT64 FrameBufferSize;
} VIDEO_ADAPTER;

#endif /* _VIDEO_ADAPTER_TYPES_H_ */
