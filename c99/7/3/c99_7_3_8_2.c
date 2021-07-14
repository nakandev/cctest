// RUN: test $? -eq 0

#include "testutil.h"
#include <complex.h>

struct _TestParam1 {
  double complex valx;
  double complex valy;
  double complex exp;
} param1[] = {
  {
    2.0, 2.0,
    4.0,
  },
};

struct _TestParam2 {
  float complex valx;
  float complex valy;
  float complex exp;
} param2[] = {
  {
    2.0, 2.0,
    4.0,
  },
};

struct _TestParam3 {
  long double complex valx;
  long double complex valy;
  long double complex exp;
} param3[] = {
  {
    2.0, 2.0,
    4.0,
  },
};

TESTCASE(c99_7_3_8_2)
{
  for(int i=0; i<ARRAY_SIZEOF(param1); i++) {
    if(cpow(param1[i].valx, param1[i].valy) != param1[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param2); i++) {
    if(cpowf(param2[i].valx, param1[i].valy) != param2[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param3); i++) {
    if(cpowl(param3[i].valx, param1[i].valy) != param3[i].exp) {
      TEST_FIN(FAIL);
    }
  }

  TEST_FIN(PASS);
}

