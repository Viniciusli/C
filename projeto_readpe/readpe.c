/* Para conpilar junto com a biblioteca petest do:
 * gcc -o readpe readpe.c -L./lib -lpetest
 *                        -L mostra ao compilador o diretório / -lpetest é a libpetest
 * dps use: 
 *    LD_LIBRARY_PATH=./lib ./readpe
 */

#include <stdio.h>
#include <stdlib.h>
#include "lib/petest.h"

void fatal(char *msg) {
  if (msg != NULL)
    fprintf(stderr, "Erro: %s\n", msg);
  exit(1);
}

void usage(void) {
  printf("Uso: \n\treadpe <arquivo.exe>\n");
  fatal(NULL);
}

int main(int argc, char *argv[]) {

  if (argc != 2)
    usage();

  PEFILE pe;
  /* typedef struct {
   *   char *filepath;
   *   IMAGE_DOS_HEADER *hdr_dos;
   * } PEFILE;*/

  pe.filepath = argv[1];

  petest_init(&pe);
  if (petest_ispe(&pe))
      printf("é um pe...continuando...\n");
  else
    fatal("não é não...saindo");

  printf("File: %s\n", pe.filepath);
  printf("MZ header: %x\n", pe.hdr_dos->e_magic);
  printf("Bytes in last page: %x\n", pe.hdr_dos->e_cblp);
  printf("Pages in file: %x\n", pe.hdr_dos->e_cp);
  printf("Relocation: %x\n", pe.hdr_dos->e_crlc);
  printf("Size of header in paragraphs: %x\n", pe.hdr_dos->e_cparhdr);
  printf("Minimum extra paragraphs: %x\n", pe.hdr_dos->e_minalloc);
  printf("Maximum extra paragraphs: %x\n", pe.hdr_dos->e_maxalloc);
  printf("Initial (relative) SS value: %x\n", pe.hdr_dos->e_ss);
  printf("Initial SP value: %x\n", pe.hdr_dos->e_sp);
  printf("Initial IP value: %x\n", pe.hdr_dos->e_ip);
  printf("Initial (relative) CS value: %x\n", pe.hdr_dos->e_cs);
  printf("Adress of relocation table: %x\n", pe.hdr_dos->e_lfarlc);
  printf("Overlay number: %x\n", pe.hdr_dos->e_ovno);
  printf("OEM identifier: %x\n", pe.hdr_dos->e_oemid);
  printf("OEM information: %x\n", pe.hdr_dos->e_oeminfo);
  printf("COFF header offset: %x\n", pe.hdr_dos->e_lfanew);


  petest_deinit(&pe);

  return 0;
}
