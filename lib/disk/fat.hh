#ifndef __FAT_HH__
#define __FAT_HH__

#include "../types.hh"

#if !defined(FAT_TYPE)
#pragma warning FAT_TYPE macro undefined. FAT32 assumed.
#define FAT_TYPE 32
#endif

typedef struct PACKED BPB
{
    u8_t    jmp[3];
    char    oem_ID[8];
    u16_t   bytes_per_sector;
    u8_t    sectors_per_cluster;
    u16_t   resv_sectors;
    u8_t    num_FATs;

    #if FAT_TYPE != 32
    u16_t   num_root_dir_entries;
    #else
    const u16_t num_root_dir_entries;
    #endif

    u16_t   num_sectors;
    u8_t    media_desc;
    u16_t   sectors_per_FAT;
    u16_t   sectors_per_track;
    u16_t   num_heads;
    u32_t   num_hidden_sectors;
    u32_t   large_num_sectors;
} BPB_t;

#if FAT_TYPE == 12 || FAT_TYPE == 16
typedef struct PACKED EBPB
{
    u8_t    drive_index;
    u8_t    NT_flags;
    u8_t    signature;
    u32_t   volume_ID;
    char    volume_label[11];
    char    system_ID[8];
} EBPB_t;
#elif FAT_TYPE == 32
typedef struct PACKED EBPB
{   
    u32_t   sectors_per_FAT;
    u16_t   flags;
    u16_t   version;
    u32_t   root_dir_cluster;
    u16_t   fsinfo_LBA;
    u16_t   backup_bs_LBA;
    u8_t    resv[12];
    u8_t    boot_drv;
    u8_t    NT_flags;
    u8_t    signature;
    u32_t   volume_ID;
    char    volume_label[11];
    char    sys_ID[8];
} EBPB_t;

typedef struct PACKED FSInfo
{
    u32_t   lead_signature;
    u8_t    resv1[480];
    u32_t   last_free_cluster;
    u32_t   avail_cluster_lookup;
    u8_t    resv2[12];
    u32_t   trail_signature;
} FSInfo_t;
#else
#error FAT_TYPE version invalid. Valid values are 12, 16, and 32.
#endif

#if FAT_TYPE == 12 || FAT_TYPE == 16
typedef u16_t   FAT_Entry_t;
#elif FAT_TYPE == 32
typedef u32_t   FAT_Entry_t;
#endif

// Pointer to FAT
typedef FAT_Entry_t* FAT_t;

typedef struct PACKED Filename8_3
{
    char    name[8];
    char    ext[3];
} Filename8_3_t;

typedef struct PACKED Time
{
    u16_t 
        hour    : 5,
        minute  : 6,
        seconds : 5;
} Time_t;

typedef struct PACKED Date
{
    u16_t
        year    : 7,
        month   : 4,
        day     : 5;
} Date_t;

typedef struct DirEntry8_3
{
    Filename8_3_t   name;
    u8_t            attr;
    u8_t            NT_flags;
    u8_t            c_time_frac_second;
    Time_t          c_time;
    Date_t          c_date;
    Date_t          a_date;

    #if FAT == 12 || FAT == 16
        u16_t           cluster_hw;
    #elif FAT == 32
        const u16_t     cluster_hw;
    #endif

    Time_t          m_time;
    Date_t          m_date;
    u16_t           cluster_lw;
    u32_t           size;
} DirEntry8_3_t;


#endif
