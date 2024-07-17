#ifndef _SYSTEM_CONFIGURATION_H_
#define _SYSTEM_CONFIGURATION_H_

#include "platform_types.h"

typedef struct _SYSTEM_CONFIGURATION_TABLE
{
    UINT64 LocalApicBaseAddress;
    UINT64 IoApicBaseAddress;
    UINT64 LocalApicBaseAddressOverride;
    UINT64 MemoryMappedConfigurationBaseAddress;
} SYSTEM_CONFIGURATION_TABLE;

#endif /* _SYSTEM_CONFIGURATION_H_ */
