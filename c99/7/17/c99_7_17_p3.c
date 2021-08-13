// RUN: test $? -eq 0

#include "testutil.h"
#include <stddef.h>

struct st {
  char m0;
  char m1;
  char m2;
  char m3;
};

TESTCASE(c99_7_17_p3)
{
#ifndef NULL
  TEST_FIN(FAIL);
#endif

  if(offsetof(struct st, m0) != 0) {
    TEST_FIN(FAIL);
  }
  if(offsetof(struct st, m1) != 1) {
    TEST_FIN(FAIL);
  }
  TEST_FIN(PASS);
}

