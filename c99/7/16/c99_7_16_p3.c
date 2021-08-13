// RUN: test $? -eq 0

#include "testutil.h"
#include <stdbool.h>

TESTCASE(c99_7_16_p3)
{
#ifndef true
  TEST_FIN(FAIL);
#endif
#ifndef false
  TEST_FIN(FAIL);
#endif
#ifndef __bool_true_false_are_defined
  TEST_FIN(FAIL);
#endif

  bool x = true;
  bool y = false;

  TEST_FIN(PASS);
}

