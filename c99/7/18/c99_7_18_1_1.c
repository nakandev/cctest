// RUN: test $? -eq 0

#include "testutil.h"
#include <stdint.h>

TESTCASE(c99_7_18_1_1)
{
  int8_t   i8;
  int16_t  i16;
  int32_t  i32;
  int64_t  i64;
  uint8_t  u8;
  uint16_t u16;
  uint32_t u32;
  uint64_t u64;
  TEST_FIN(PASS);
}

