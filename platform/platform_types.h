#ifndef _PLATFORM_TYPES_H_
#define _PLATFORM_TYPES_H_

#define API __attribute__((ms_abi))
#define NAKED __attribute__((naked))
#define PACKED __attribute__((packed))
#define NO_CALLER_SAVED_REGISTERS __attribute__((no_caller_saved_registers))
#define PACKED_64 __attribute__((aligned(8)))
#define PACKED_128 __attribute__((aligned(16)))

#define ASM __asm__ volatile
#define INTERRUPT __attribute__((interrupt))

#define IN
#define OUT
#define OPTIONAL
#define CONST const

typedef char INT8;
typedef short INT16;
typedef int INT32;
typedef long long int INT64;

typedef unsigned char UINT8;
typedef unsigned short UINT16;
typedef unsigned int UINT32;
typedef unsigned long long int UINT64;

typedef INT64 INTN;
typedef UINT64 UINTN;

typedef UINT8 CHAR8;
typedef UINT16 CHAR16;

typedef UINT8 BOOLEAN;
#define TRUE 1
#define FALSE 0

typedef void VOID;
#define NULL_PTR (VOID *)0

typedef UINT64 STATUS;

#define E_OK 0x00000000
#define E_NOT_OK 0x00000001

typedef struct _STRING
{
    CHAR16 *Buffer;
    UINT64 Length;
    UINT64 Capacity;
} STRING;

typedef struct _APPLICATION_VIEW_INFO
{
    UINT64 PositionX;
    UINT64 PositionY;
    UINT64 Width;
    UINT64 Height;
    UINT32 *FrameBuffer;
} APPLICATION_VIEW_INFO;

typedef STATUS(API *NOTIFY_CALLBACK)(VOID);

typedef struct _INTERRUPT_FRAME
{
    UINT64 Rip;
    UINT64 Cs;
    UINT64 RFlags;
    UINT64 RSP;
    UINT64 SS;
} PACKED INTERRUPT_FRAME;

typedef VOID* HANDLE;

typedef struct _DIRECTORY_CONTENT
{
    CHAR16 DirectoryEntryName[32];
    BOOLEAN IsDirectory;
} DIRECTORY_CONTENT;

#endif /* _PLATFORM_TYPES_H_ */
