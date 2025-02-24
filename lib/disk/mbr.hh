#ifndef __MBR_HH__
#define __MBR_HH__

#include "../types.hh"


typedef struct PACKED MBR_DriveAttributes
{
    u8_t
                : 7,
        active  : 1;
} MBR_DriveAttributes_t;

typedef struct PACKED MBR_Entry
{
    MBR_DriveAttributes_t   drive_attrs;

    // CHS address of first sector in partition
    u8_t    prt_start_cylinder;
    u8_t    prt_start_head;
    u8_t    prt_start_sector;

    u8_t    prt_type;
    
    // CHS address of last sector in partition
    u8_t    prt_last_cylinder;
    u8_t    prt_last_head;
    u8_t    prt_last_sector;

    // LBA address of first sector in partition
    u32_t   prt_start_lba;

    // Number of sectors in partiton
    u32_t   prt_num_sectors;
} MBR_Entry_t;


#endif