#include <stdio.h> // This contain functions like  printf & scanf

int main() { // our code goes in here
  printf("Part-1\n");

  printf("Hello, World!\n"
         "Welcome to C programming.\n");

  // part 2nd
  // more advanced type of code which takes input name from the user
  char name2[100];

  printf("Part-2\n");

  printf("Write your name : \n");
  scanf("%s", name2);

  printf("This is the name u enterd %s", name2);

  // part 3rd
  char name3[100];

  printf("name with space entered : \n");
  fgets(name3, (100), stdin);

  printf("%s\n", name3);

  return 0;
}

// there is an empty space error needed to be fixed
// error is in the part-2 in the scanf
