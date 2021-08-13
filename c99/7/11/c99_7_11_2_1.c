// RUN: test $? -eq 0

#include "testutil.h"
#include <locale.h>

TESTCASE(c99_7_11_2_1)
{
  if(localeconv() == NULL) {
    TEST_FIN(FAIL);
  }
  TEST_FIN(PASS);
}

