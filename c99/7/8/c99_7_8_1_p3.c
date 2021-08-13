// RUN: test $? -eq 0

#include "testutil.h"
#include <inttypes.h>

TESTCASE(c99_7_8_1_p3)
{
  {
    uint32_t x = 1;
    printf("x=" PRIo32 "\n", x);
    printf("x=" PRIu32 "\n", x);
    printf("x=" PRIx32 "\n", x);
    printf("x=" PRIX32 "\n", x);
  }
  {
    uint_least32_t x = 1;
    printf("x=" PRIoLEAST32 "\n", x);
    printf("x=" PRIuLEAST32 "\n", x);
    printf("x=" PRIxLEAST32 "\n", x);
    printf("x=" PRIXLEAST32 "\n", x);
  }
  {
    uint_fast32_t x = 1;
    printf("x=" PRIoFAST32 "\n", x);
    printf("x=" PRIuFAST32 "\n", x);
    printf("x=" PRIxFAST32 "\n", x);
    printf("x=" PRIXFAST32 "\n", x);
  }
  {
    uintmax_t x = 1;
    printf("x=" PRIoMAX "\n", x);
    printf("x=" PRIuMAX "\n", x);
    printf("x=" PRIxMAX "\n", x);
    printf("x=" PRIXMAX "\n", x);
  }
  {
    uint32_t a = 1;
    uintptr_t x = &a;
    printf("x=" PRIoPTR "\n", x);
    printf("x=" PRIuPTR "\n", x);
    printf("x=" PRIxPTR "\n", x);
    printf("x=" PRIXPTR "\n", x);
  }

  TEST_FIN(PASS);
}

