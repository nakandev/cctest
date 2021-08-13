// RUN: test $? -eq 0

#include "testutil.h"
#include <inttypes.h>

TESTCASE(c99_7_8_1_p2)
{
  {
    int32_t x = 1;
    printf("x=" PRId32 "\n", x);
    printf("x=" PRIi32 "\n", x);
  }
  {
    int_least32_t x = 1;
    printf("x=" PRIdLEAST32 "\n", x);
    printf("x=" PRIiLEAST32 "\n", x);
  }
  {
    int_fast32_t x = 1;
    printf("x=" PRIdFAST32 "\n", x);
    printf("x=" PRIiFAST32 "\n", x);
  }
  {
    intmax_t x = 1;
    printf("x=" PRIdMAX "\n", x);
    printf("x=" PRIiMAX "\n", x);
  }
  {
    int32_t a = 1;
    intptr_t x = &a;
    printf("x=" PRIdPTR "\n", x);
    printf("x=" PRIiPTR "\n", x);
  }

  TEST_FIN(PASS);
}

