// RUN: test $? -eq 0

#include "testutil.h"
#include <math.h>

struct _TestParam1 {
  double valx;
  double valy;
  double exp;
} param1[] = {
  {
    1.0, 1.0,
    1.57079632679489662,
  },
};
struct _TestParam2 {
  float valx;
  float valy;
  float exp;
} param2[] = {
  {
    1.0, 1.0,
    1.57079633F,
  },
};
struct _TestParam3 {
  long double valx;
  long double valy;
  long double exp;
} param3[] = {
  {
    1.0, 1.0,
    1.570796326794896619231L,
  },
};

TESTCASE(c99_7_12_4_4)
{
  for(int i=0; i<ARRAY_SIZEOF(param1); i++) {
    if(!D_EQ(atan2(param1[i].valx, param1[i].valy), param1[i].exp)) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param2); i++) {
    if(!F_EQ(atan2f(param2[i].valx, param2[i].valy), param2[i].exp)) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param3); i++) {
    if(!L_EQ(atan2l(param3[i].valx, param3[i].valy), param3[i].exp)) {
      TEST_FIN(FAIL);
    }
  }
  TEST_FIN(PASS);
}

