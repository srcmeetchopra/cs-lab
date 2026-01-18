#include <stdio.h>
int main() {
  // defineing the data structures
  int an;
  char name;
  float balance;
  int choice;

  do {
    printf("Menu Options:\n");
    printf("0. Exit\n");
    printf("1. Create Account\n");
    printf("2. Deposit \n");
    printf("3. Withdraw\n");
    printf("4. View Balance\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
    case 1:
      printf("Enter ");
      break;

    case 2:
      printf("2.\n");
      break;

    case 3:
      printf("3.\n");
      break;
    case 4:
      printf("Invalid\n");
      break;
    }
  } while (choice != 0);

  return 0;
}
