// RUN: test $? -eq 0

#include "testutil.h"
#include <locale.h>

TESTCASE(c99_7_11_1_1)
{
  if(setlocale(LC_ALL, "C") == NULL) {
    TEST_FIN(FAIL);
  }
  TEST_FIN(PASS);
}

