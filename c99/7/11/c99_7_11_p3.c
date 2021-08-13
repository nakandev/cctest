// RUN: test $? -eq 0

#include "testutil.h"
#include <locale.h>

TESTCASE(c99_7_11_p3)
{
#ifndef LC_ALL
  TEST_FIN(FAIL);
#endif
#ifndef LC_COLLATE
  TEST_FIN(FAIL);
#endif
#ifndef LC_CTYPE
  TEST_FIN(FAIL);
#endif
#ifndef LC_MONETARY
  TEST_FIN(FAIL);
#endif
#ifndef LC_NUMERIC
  TEST_FIN(FAIL);
#endif
#ifndef LC_TIME
  TEST_FIN(FAIL);
#endif
  TEST_FIN(PASS);
}

