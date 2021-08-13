// RUN: test $? -eq 0

#include "testutil.h"
#include <math.h>

struct _TestParam1 {
  double val;
  long int exp;
} param1[] = {
  {
    1.5,
    2,
  },
};
struct _TestParam2 {
  float val;
  long int exp;
} param2[] = {
  {
    1.5,
    2,
  },
};
struct _TestParam3 {
  long double val;
  long int exp;
} param3[] = {
  {
    1.5,
    2,
  },
};
struct _TestParam4 {
  double val;
  double exp;
} param4[] = {
  {
    1.5,
    2,
  },
};
struct _TestParam5 {
  float val;
  float exp;
} param5[] = {
  {
    1.5,
    2,
  },
};
struct _TestParam6 {
  long double val;
  long double exp;
} param6[] = {
  {
    1.5,
    2,
  },
};

TESTCASE(c99_7_12_9_5)
{
  for(int i=0; i<ARRAY_SIZEOF(param1); i++) {
    if(lrint(param1[i].val) != param1[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param2); i++) {
    if(lrintf(param2[i].val) != param2[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param3); i++) {
    if(lrintl(param3[i].val) != param3[i].exp) {
      TEST_FIN(FAIL);
    }
  }

  for(int i=0; i<ARRAY_SIZEOF(param4); i++) {
    if(llrint(param4[i].val) != param4[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param5); i++) {
    if(llrintf(param5[i].val) != param5[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param6); i++) {
    if(llrintl(param6[i].val) != param6[i].exp) {
      TEST_FIN(FAIL);
    }
  }

  TEST_FIN(PASS);
}

