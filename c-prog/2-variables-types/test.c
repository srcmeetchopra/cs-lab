#include <stdio.h>

/*
C has several types of variables
    Integers - whole numbers which can be either positive or negative. Defined
using char, int, short, long or long long. Unsigned integers - whole numbers
which can only be positive. Defined using unsigned char, unsigned int, unsigned
short, unsigned long or unsigned long long. Floating point numbers - real
numbers (numbers with fractions). Defined using float and double. Structures -
will be explained later, in the Structures section.
*/

/*
 * Memory size:
 int     - 4 bytes
 char    - 1 byte
 float   - 4 bytes
 double  - 8 bytes

 2nd part

 * we can find size of any datatype by using:
 ""printf("SIze of int: %zu bytes\n", sizeof(int))"";


*/

int main() {
  int i;
  char c;
  float f;
  double d;

  i = 2;
  c = 'c';
  f = 123456789.1234567890;
  d = 123456789.1234567890; // more precise then the float can hold 15-16

  printf("i=%d\n", i);
  printf("c=%c\n", c);
  printf("f=%f\n", f);
  printf("d=%lf\n", d);
  return 0;
}
