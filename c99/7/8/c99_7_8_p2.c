// RUN: test $? -eq 0

#include "testutil.h"
#include <inttypes.h>

TESTCASE(c99_7_8_p2)
{
  imaxdiv_t a;
  TEST_FIN(PASS);
}

