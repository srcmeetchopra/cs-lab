#include <stdio.h>
int main() {
  float a, b, r;
  char c;

  printf("Welcome to calculator\n");

  printf("Enter first value: ");
  scanf(" %f", &a);

  printf("Enter your operator(+,-,/,*): ");
  scanf(" %c", &c);

  printf("Enter second value: ");
  scanf(" %f", &b);

  printf("Following are the values entered: \n");
  printf("First value = %f \n", a);
  printf("Operator = %c \n", c);
  printf("Second value = %f \n", b);

  if (c == '+') {
    r = a + b;
  } else if (c == '-') {
    r = a - b;
  } else if (c == '/') {
    r = a / b;
  } else if (c == '*') {
    r = a * b;
  } else {
    printf("Wrong or No operator is selected\n");
  }

  printf("Ans is: %f\n", r);

  return 0;
}
