// RUN: test $? -eq 0

#include "testutil.h"
#include <math.h>

struct _TestParam1 {
  double val;
  double exp1;
  double exp2;
} param1[] = {
  {
    1.5,
    0.5,
    1.0,
  },
};
struct _TestParam2 {
  float val;
  float exp1;
  float exp2;
} param2[] = {
  {
    1.5,
    0.5,
    1.0,
  },
};
struct _TestParam3 {
  long double val;
  long double exp1;
  long double exp2;
} param3[] = {
  {
    1.5,
    0.5,
    1.0,
  },
};

TESTCASE(c99_7_12_6_12)
{
  for(int i=0; i<ARRAY_SIZEOF(param1); i++) {
    double ret1, ret2;
    ret1 = modf(param1[i].val, &ret2);
    if(ret1 != param1[i].exp1 || ret2 != param1[i].exp2) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param2); i++) {
    float ret1, ret2;
    ret1 = modff(param2[i].val, &ret2);
    if(ret1 != param2[i].exp1 || ret2 != param2[i].exp2) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param3); i++) {
    long double ret1, ret2;
    ret1 = modfl(param3[i].val, &ret2);
    if(ret1 != param3[i].exp1 || ret2 != param3[i].exp2) {
      TEST_FIN(FAIL);
    }
  }
  TEST_FIN(PASS);
}

