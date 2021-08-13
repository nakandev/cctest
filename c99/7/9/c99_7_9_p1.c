// RUN: test $? -eq 0

#include "testutil.h"
#include <iso646.h>

TESTCASE(c99_7_9_p1)
{
#ifndef and
  TEST_FIN(FAIL);
#endif
#ifndef and_eq
  TEST_FIN(FAIL);
#endif
#ifndef bitand
  TEST_FIN(FAIL);
#endif
#ifndef bitor
  TEST_FIN(FAIL);
#endif
#ifndef compl
  TEST_FIN(FAIL);
#endif
#ifndef not
  TEST_FIN(FAIL);
#endif
#ifndef not_eq
  TEST_FIN(FAIL);
#endif
#ifndef or
  TEST_FIN(FAIL);
#endif
#ifndef or_eq
  TEST_FIN(FAIL);
#endif
#ifndef xor
  TEST_FIN(FAIL);
#endif
#ifndef xor_eq
  TEST_FIN(FAIL);
#endif
  TEST_FIN(PASS);
}

