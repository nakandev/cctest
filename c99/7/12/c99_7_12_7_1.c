// RUN: test $? -eq 0

#include "testutil.h"
#include <math.h>

struct _TestParam1 {
  double val;
  double exp;
} param1[] = {
  {
    8.0,
    2.0,
  },
};
struct _TestParam2 {
  float val;
  float exp;
} param2[] = {
  {
    8.0,
    2.0,
  },
};
struct _TestParam3 {
  long double val;
  long double exp;
} param3[] = {
  {
    8.0,
    2.0,
  },
};

TESTCASE(c99_7_12_7_1)
{
  for(int i=0; i<ARRAY_SIZEOF(param1); i++) {
    if(cbrt(param1[i].val) != param1[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param2); i++) {
    if(cbrtf(param2[i].val) != param2[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param3); i++) {
    if(cbrtl(param3[i].val) != param3[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  TEST_FIN(PASS);
}

