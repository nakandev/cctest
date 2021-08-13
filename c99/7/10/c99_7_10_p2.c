// RUN: test $? -eq 0

#include "testutil.h"
#include <limits.h>

TESTCASE(c99_7_10_p2)
{
#ifndef CHAR_BIT
  TEST_FIN(FAIL);
#endif
#ifndef SCHAR_MIN
  TEST_FIN(FAIL);
#endif
#ifndef SCHAR_MAX
  TEST_FIN(FAIL);
#endif
#ifndef UCHAR_MAX
  TEST_FIN(FAIL);
#endif
#ifndef CHAR_MIN
  TEST_FIN(FAIL);
#endif
#ifndef CHAR_MAX
  TEST_FIN(FAIL);
#endif
#ifndef MB_LEN_MAX
  TEST_FIN(FAIL);
#endif
#ifndef SHRT_MIN
  TEST_FIN(FAIL);
#endif
#ifndef SHRT_MAX
  TEST_FIN(FAIL);
#endif
#ifndef USHRT_MAX
  TEST_FIN(FAIL);
#endif
#ifndef INT_MIN
  TEST_FIN(FAIL);
#endif
#ifndef INT_MAX
  TEST_FIN(FAIL);
#endif
#ifndef UINT_MAX
  TEST_FIN(FAIL);
#endif
#ifndef LONG_MIN
  TEST_FIN(FAIL);
#endif
#ifndef LONG_MAX
  TEST_FIN(FAIL);
#endif
#ifndef ULONG_MAX
  TEST_FIN(FAIL);
#endif
#ifndef LLONG_MIN
  TEST_FIN(FAIL);
#endif
#ifndef LLONG_MAX
  TEST_FIN(FAIL);
#endif
#ifndef ULLONG_MAX
  TEST_FIN(FAIL);
#endif
  TEST_FIN(PASS);
}

