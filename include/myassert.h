/*******************************************************************************/
/* BlackCompanyDev 2022-2023                                                   */
/*			                                                       */
/*          Elie Renneson                                                      */
/*				                                               */
/*			         - PROJET ASSERT -                             */
/*				     myassert.h		                       */
/*******************************************************************************/
#ifndef ___MYASSERT_H___
#define ___MYASSERT_H___
#include <stdio.h>
#include <stdlib.h>

#define myassert(condition) __myassert(__LINE__, __FILE__, !!(condition), #condition)
void __myassert(int line, const char *file, int condition, const char *expr);

#endif
