/*******************************************************************************/
/* BlackCompanyDev 2022-2023                                                   */
/*			                                                       */
/*          Elie Renneson                                                      */
/*				                                               */
/*			         - PROJET ASSERT -                             */
/*				     myassert.c		                       */
/*******************************************************************************/
#include "myassert.h"

void __myassert(int line, const char *file, int condition, const char *expr) {
  if (condition) return;
  printf("\n\nASSERTION FAILURE!: myassert condition failed at file %s line %d:\n%s\n\n", file, line, expr);
  exit(1);
}
