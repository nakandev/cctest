// RUN: test $? -eq 0

#include "testutil.h"
#include <math.h>

struct _TestParam1 {
  double val;
  double exp;
} param1[] = {
  {
    2.71828182845904523536,
    1.0,
  },
};
struct _TestParam2 {
  float val;
  float exp;
} param2[] = {
  {
    2.71828182845904523536F,
    1.0,
  },
};
struct _TestParam3 {
  long double val;
  long double exp;
} param3[] = {
  {
    2.71828182845904523536L,
    1.0,
  },
};

TESTCASE(c99_7_12_6_7)
{
  for(int i=0; i<ARRAY_SIZEOF(param1); i++) {
    if(log(param1[i].val) != param1[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param2); i++) {
    if(logf(param2[i].val) != param2[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param3); i++) {
    if(logl(param3[i].val) != param3[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  TEST_FIN(PASS);
}

