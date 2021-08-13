// RUN: test $? -eq 0

#include "testutil.h"
#include <math.h>

struct _TestParam1 {
  const char* val;
  double exp;
} param1[] = {
  {
    "",
    NAN,
  },
};
struct _TestParam2 {
  const char* val;
  float exp;
} param2[] = {
  {
    "",
    NAN,
  },
};
struct _TestParam3 {
  const char* val;
  long double exp;
} param3[] = {
  {
    "",
    NAN,
  },
};

TESTCASE(c99_7_12_11_2)
{
  for(int i=0; i<ARRAY_SIZEOF(param1); i++) {
    if(nan(param1[i].val) != param1[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param2); i++) {
    if(nanf(param2[i].val) != param2[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  for(int i=0; i<ARRAY_SIZEOF(param3); i++) {
    if(nanl(param3[i].val) != param3[i].exp) {
      TEST_FIN(FAIL);
    }
  }
  TEST_FIN(PASS);
}

