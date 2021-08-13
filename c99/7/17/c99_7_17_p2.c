// RUN: test $? -eq 0

#include "testutil.h"
#include <stddef.h>

TESTCASE(c99_7_17_p2)
{
  {
    char str[] = "abcdefg";
    char *p1 = str + 1;
    char *p2 = str + 3;
    ptfdiff_t pdiff = p1 - p2;
    if(pdiff != -2) {
      TEST_FIN(FAIL);
    }
  }

  {
    size_t s = 10;
  }

  {
    wchar_t wc = 'A';
  }

  TEST_FIN(PASS);
}

