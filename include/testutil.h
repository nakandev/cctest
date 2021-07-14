#ifndef __NKUTIL_H__
#define __NKUTIL_H__

#define TESTCASE(str) int main(void)

#define PASS         0
#define FAIL         51
#define XPASS        52  // non-expected pass
#define XFAIL        53  // expected fail
#define UNSUPPORTED  54
#define TEST_FIN(code) return (code)

#define ARRAY_SIZEOF(x) (sizeof(x)/sizeof(x[0]))

#endif /*__NKUTIL_H__*/

