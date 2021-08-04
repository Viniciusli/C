#include <stdbool.h>
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

#pragma pack(push, 1)

typedef struct {
	uint16_t e_magic;    // magic number
	uint16_t e_cblp;     // bytes in last page o file
	uint16_t e_cp;       // pages in file
	uint16_t e_crlc;     // relocations
	uint16_t e_cparhdr;  // size of header in paragraphs
	uint16_t e_minalloc; // minimum extra paragraphs
	uint16_t e_maxalloc; // maximum extra paragraphs
	uint16_t e_ss;       // initial (relative) SS value
	uint16_t e_sp;       // initial SP value
	uint16_t e_csum;     // check sum
	uint16_t e_ip;       // initial IP value
	uint16_t e_cs;       // initial (relative) CS value
	uint16_t e_lfarlc;   // adress alocation table
	uint16_t e_ovno;     // overlay number
	uint16_t e_res[4];   // reserved words 
	uint16_t e_oemid;    // OEM identifier
	uint16_t e_oeminfo;  // OEM information
	uint16_t e_res2[10]; // reserved words
	uint32_t e_lfanew;   // sizeof(IMAGE_DOS_HEADER) + size of MS-DOS stub
} IMAGE_DOS_HEADER;

#pragma pack(pop)


typedef struct {
  char *filepath;
  IMAGE_DOS_HEADER *hdr_dos;
} PEFILE;

bool petest_ispe(PEFILE *pe);
// use: gcc -shared -fPIC -o libpetest.so petest.c
//                                    .so = shared object

bool petest_init(PEFILE *pe);
void petest_deinit(PEFILE *pe);
