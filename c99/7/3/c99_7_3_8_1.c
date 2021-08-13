// RUN: test $? -eq 0

#include "testutil.h"
#include <complex.h>

struct _TestParam1 {
  double complex val;
  double complex exp;
} param1[] = {
  {
    -1.0,
    1.0,
  },
};

struct _TestParam2 {
  float complex val;
  float complex exp;
} param2[] = {
  {
    -1.0,
    1.0,
  },
};

struct _TestParam3 {
  long double complex val;
  long double complex exp;
} param3[] = {
  {
    -1.0,
    1.0,
  },
};

TESTCASE(c99_7_3_8_1)
{
  for(int i=0; i<ARRAY_SIZEOF(param1); i++) {
    if(cabs(param1[i].val) != param1[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param2); i++) {
    if(cabsf(param2[i].val) != param2[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param3); i++) {
    if(cabsl(param3[i].val) != param3[i].exp) {
      TEST_FIN(FAIL);
    }
  }

  TEST_FIN(PASS);
}

