#include <stdio.h>

int main(int argc, char** argv) {
  char firstName[20], secondName[20];
  printf("Please enter your first name and second name:\n");
  scanf("%s %s", firstName, secondName);
  printf("%s, %s\n", firstName, secondName);
  return 0;
}
