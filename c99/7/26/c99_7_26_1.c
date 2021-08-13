// RUN: test $? -eq 0

#include "testutil.h"
#include <complex.h>

TESTCASE(c99_7_26_1)
{
#define IS_UNSUPPORTED 1
#ifdef cerf
#undef IS_UNSUPPORTED
  cerf;
  cerff;
  cerfl;
#endif
#ifdef cerfc
#define IS_SUPPORTED 1
#undef IS_UNSUPPORTED
  cerfc;
  cerfcf;
  cerfcl;
#endif
#ifdef cexp2
#undef IS_UNSUPPORTED
  cexp2;
  cexp2f;
  cexp2l;
#endif
#ifdef cexpm1
#undef IS_UNSUPPORTED
  cexpm1;
  cexpm1f;
  cexpm1l;
#endif
#ifdef clog10
#undef IS_UNSUPPORTED
  clog10;
  clog10f;
  clog10l;
#endif
#ifdef clog1p
#undef IS_UNSUPPORTED
  clog1p;
  clog1pl;
  clog1pf;
#endif
#ifdef clog2
#undef IS_UNSUPPORTED
  clog2;
  clog2f;
  clog2l;
#endif
#ifdef clgamma
#undef IS_UNSUPPORTED
  clgamma;
  clgammaf;
  clgammal;
#endif
#ifdef ctgamma
#undef IS_UNSUPPORTED
  ctgamma;
  ctgammaf;
  ctgammal;
#endif

#ifdef IS_UNSUPPORTED
  TEST_FIN(UNSUPPORTED);
#else
  TEST_FIN(PASS);
#endif
}

