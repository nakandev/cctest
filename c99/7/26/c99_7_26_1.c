// RUN: test $? -eq 0

#include "testutil.h"
#include <complex.h>

TESTCASE(c99_7_26_1)
{
  cerf;
  cerfc;
  cexp2;
  cexpm1;
  clog10;
  clog1p;
  clog2;
  clgamma;
  ctgamma;

  TEST_FIN(PASS);
}

