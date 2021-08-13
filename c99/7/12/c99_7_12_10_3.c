// RUN: test $? -eq 0

#include "testutil.h"
#include <math.h>

struct _TestParam1 {
  double valx;
  double valy;
  double exp1;
  int exp2;
} param1[] = {
  {
    3.0, 4.0,
    3.0, 0,
  },
};
struct _TestParam2 {
  float valx;
  float valy;
  float exp1;
  int exp2;
} param2[] = {
  {
    3.0, 4.0,
    3.0, 0,
  },
};
struct _TestParam3 {
  long double valx;
  long double valy;
  long double exp1;
  int exp2;
} param3[] = {
  {
    3.0, 4.0,
    3.0, 0,
  },
};

TESTCASE(c99_7_12_10_3)
{
  for(int i=0; i<ARRAY_SIZEOF(param1); i++) {
    double ret1;
    int ret2;
    ret1 = fmod(param1[i].valx, param1[i].valy);
    if(ret1 != param1[i].exp1 || ret2 != param1[i].exp2) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param2); i++) {
    float ret1;
    int ret2;
    ret1 = fmodf(param2[i].valx, param2[i].valy);
    if(ret1 != param2[i].exp1 || ret2 != param2[i].exp2) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param3); i++) {
    long double ret1;
    int ret2;
    ret1 = fmodl(param3[i].valx, param3[i].valy);
    if(ret1 != param3[i].exp1 || ret2 != param3[i].exp2) {
      TEST_FIN(FAIL);
    }
  }
  TEST_FIN(PASS);
}

