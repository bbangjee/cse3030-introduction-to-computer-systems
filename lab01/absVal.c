/*
 * absVal(x): return the absolute value of x.
 * - Assume that INT_MIN (-2^31) is not provided as an input.
 * - Ex) absVal(2) = 2, absVal(-1) = 1
 */
int absVal(int x) {
  // x >> 31은 x가 음수이면 1111....1111, 그 외의 경우 0000....0000
  int temp = x>>31;
  return temp ^ (x + temp);
}
