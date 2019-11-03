#ifndef DRIVE_H
#define DRIVE_H

#include <stdint.h>
#include <stddef.h>

struct drive_s;

typedef ssize_t (*read_drive_fp)  (unsigned long offset, size_t count, void *buf, struct drive_s drive);
typedef ssize_t (*write_drive_fp) (unsigned long offset, size_t count, void *buf, struct drive_s drive);

typedef struct drive_s
{
	int 			type;
	char 			*name;
	void 			*drive_info;	/* For example this could be a ramdisk_drive struct or a ata_drive struct */
	
	read_drive_fp 	read;
	write_drive_fp 	write;
} drive_t;


#endif