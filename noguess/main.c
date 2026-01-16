#include <stdio.h>
int main() {
  int gs;

  printf("Enter your guess:\n");
  scanf("%d", &gs);

  while (gs < 7) {
    printf("Higher\n");

    while (gs == 7) {
      printf("yup ur ans is write the ans is 7\n");
    }
  }

  return 0;
}
