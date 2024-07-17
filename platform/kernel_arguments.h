#ifndef _KERNEL_ARGUMENTS_H_
#define _KERNEL_ARGUMENTS_H_

#include "platform_types.h"
#include "video_adapter_types.h"
#include "hii_loader_types.h"
#include "system_memory_types.h"

typedef struct _KERNEL_ARGUMENTS
{
    SYSTEM_MEMORY *SystemMemory;
    VIDEO_ADAPTER *VideoAdapter;
    HII_CHARACTERS *CharatersBitmap;
    UINT64 RootSystemDescriptorPointer;
} KERNEL_ARGUMENTS;

typedef STATUS(API *KERNEL_ENTRY)(KERNEL_ARGUMENTS *KernelArguments);

#endif /* _KERNEL_ARGUMENTS_H_ */
