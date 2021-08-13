// RUN: test $? -eq 0

#include "testutil.h"
#include <math.h>

struct _TestParam1 {
  double valx;
  double valy;
  double exp;
} param1[] = {
  {
    2.0, 3.0,
    8.0,
  },
};
struct _TestParam2 {
  float valx;
  float valy;
  float exp;
} param2[] = {
  {
    2.0, 3.0,
    8.0,
  },
};
struct _TestParam3 {
  long double valx;
  long double valy;
  long double exp;
} param3[] = {
  {
    2.0, 3.0,
    8.0,
  },
};

TESTCASE(c99_7_12_7_4)
{
  for(int i=0; i<ARRAY_SIZEOF(param1); i++) {
    if(pow(param1[i].valx, param1[i].valy) != param1[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param2); i++) {
    if(powf(param2[i].valx, param2[i].valy) != param2[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param3); i++) {
    if(powl(param3[i].valx, param3[i].valy) != param3[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  TEST_FIN(PASS);
}

