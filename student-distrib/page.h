#ifdef PAGE_H
#define PAGE_H
#include "types.h"

#define DIR_SIZE 1024

typedef struct __attribute__((packed)) page_dir_kb_entry{
    uint32_t addr : 20;
    uint32_t avail : 3;
    uint32_t global : 1;
    uint32_t pageSize : 1;
    uint32_t reserved : 1;
    uint32_t accessed : 1;
    uint32_t cacheDisabled : 1;
    uint32_t writeThrough : 1;
    uint32_t userSupervisor : 1;
    uint32_t readWrite  : 1;
    uint32_t present : 1;
} page_dir_kb_entry_t;

typedef struct __attribute__((packed)) page_dir_mb_entry{
    uint32_t addr : 10;
    uint32_t reserved : 9;
    utin32_t pgTblAttIdx : 1;
    uint32_t avail : 3;
    uint32_t global : 1;
    uint32_t pageSize : 1;
    uint32_t dirty : 1;
    uint32_t accessed : 1;
    uint32_t cacheDisabled : 1;
    uint32_t writeThrough : 1;
    uint32_t userSupervisor : 1;
    uint32_t readWrite  : 1;
    uint32_t present : 1;
} page_dir_mb_entry_t;

typedef struct __attribute__((packed)) page_table_kb_entry{
    uint32_t addr : 20;
    uint32_t avail : 3;
    uint32_t global : 1;
    uint32_t pgTblAttIdx : 1;
    uint32_t dirty : 1;
    uint32_t accessed : 1;
    uint32_t cacheDisabled : 1;
    uint32_t writeThrough : 1;
    uint32_t userSupervisor : 1;
    uint32_t readWrite  : 1;
    uint32_t present : 1;
} page_table_kb_entry_t;


extern void initPaging();

#endif // PAGE_H
