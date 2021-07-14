// RUN: test $? -eq 0

#include "testutil.h"
#include <errno.h>

TESTCASE(c99_7_5_p2)
{
#ifndef EDOM
  TEST_FIN(FAIL);
#endif
#ifndef EILSEQ
  TEST_FIN(FAIL);
#endif
#ifndef ERANGE
  TEST_FIN(FAIL);
#endif
  TEST_FIN(PASS);
}

