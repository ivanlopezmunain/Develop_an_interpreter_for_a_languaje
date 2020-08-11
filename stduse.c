/**
 * @Author: Dušan Kolář
 * @Year:   2003-2018
 * Copyright (c) 2018
 * Licence: GLP 3.0
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "stduse.h"

static char fName[10240] = "";

static unsigned char wasE = 0;
static unsigned char exitOnE = 0;

/* --------------------------------------------------------------------- */

void setFilename(const char *str) {
  strcpy(fName,str);
}

/* --------------------------------------------------------------------- */

int wasError(void) { return wasE; }

/* --------------------------------------------------------------------- */

void exitOnError(void) { exitOnE = 1; }

/* --------------------------------------------------------------------- */

void prError(unsigned short lineno, char *format, ...) {
  va_list ap;
  char *arg;

  wasE = 1;

  va_start(ap,format);
  fprintf(stderr,"%s (%u): ",fName,lineno);
  vfprintf(stderr,format,ap);
  fflush(stderr);
  va_end(ap);

  if (exitOnE) exit(1);
}

/* --------------------------------------------------------------------- */

void prWarning(unsigned short lineno, char *format, ...) {
  va_list ap;
  char *arg;

  va_start(ap,format);
  fprintf(stderr,"%s (%u): ",fName,lineno);
  vfprintf(stderr,format,ap);
  fflush(stderr);
  va_end(ap);

}

/* --------------------------------------------------------------------- */
/* --------------------------------------------------------------------- */

void *xmalloc(unsigned short size) {
  void *tmp;

  if ((tmp=malloc(size))==NULL) {
    fprintf(stderr,"Fatal error: Out of memory\n");
    fflush(stderr);
    exit(2);
  }

  return tmp;
}

/* --------------------------------------------------------------------- */

void xfree(void *ptr) {
  free(ptr);
}

/* --------------------------------------------------------------------- */
/* --------------------------------------------------------------------- */

char *sdup(const char *s) {

  char *res = xmalloc(strlen(s)+1);

  strcpy(res,s);

  return res;
}

/* --------------------------------------------------------------------- */
/* --------------------------------------------------------------------- */

