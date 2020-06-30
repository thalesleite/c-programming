// Bitwise Operators

/*
  &     AND
    - when both bits are 1 the result is 1
*/

/*
  |     OR
    - when both bits are 0 the result is 0
*/

/*
  ~     NOT one's complement(unary)
    - when 1 result in 0
    - when 0 result in 1
*/

/*
  <<    LEFT shift
    1. First operand(get left shifted) << Second Operand(numbers of places to shift)
    ex:
      var<<1                var = 3
      left shift by 1       3 = 0000 0011
                                0000 011_
      result:               = 6(0000 0110)

    2. LEFT shifting = n * 2 exponent Second Operand
    ex:
      var = 3;
      var << 1;
      result:               6(3 * 2 exponent 1)
*/

/*
  >>    RIGHT shift
    1. First operand(get right shifted) >> Second Operand(numbers of places to shift)
    ex:
      var>>1                var = 3
      right shift by 1       3 = 0000 0011
                                 _000 0001
      result:               = 1(0000 0001)

    2. RIGHT shifting = n / 2 exponent Second Operand
    ex:
      var = 3;
      var >> 1;
      result:               1(3 / 2 exponent 1)
*/

/*
  ^     XOR exclusive OR
    - when both bits are 0 the result is 0
    - when both bits are 1 the result is 0
*/

#include <stdio.h>

int main(){
  char x = 1, y = 2; // x = 1(0000 0001), y = 2(0000 0010)

  if ( x & y ) // 1 & 2 = 0(0000 0000)
    printf("Result of x & y is 1");

  if (x && y) // 1 && 2 = TRUE && TRUE = TRUE = 1
    printf("Result of x && y is 1");

  return 0;
}