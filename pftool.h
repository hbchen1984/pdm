#ifndef      __PSTAT_H
#define      __PSTAT_H

#include <signal.h>
#include <dirent.h>
#include <getopt.h>
#include "pfutils.h"

/* Function Prototypes */
void output_proc(int request, int rank);

#define ANYFS     0
#define PANASASFS 1
#define GPFSFS    2
#define NULLFS    3
#define FUSEFS    4 


#define FUSE_SUPER_MAGIC 0x65735546 
#define GPFS_FILE        0x47504653 
#define FUSE_FILE        0x65735546 
#define PANFS_FILE       0xaad7aaea
#define EXT2_FILE        0xEF53
#define EXT3_FILE        0xEF53 

#define NULL_DEVICE      "/dev/null"  

#define WAIT_TIME    1
#define SANITY_TIMER  300 

#endif
