#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
  char firstName[20], secondName[20];
  int firstLen, secondLen;
  printf("Please enter your first name and second name:\n");
  scanf("%s %s", firstName, secondName);
  firstLen = strlen(firstName);
  secondLen = strlen(secondName);
  printf("%s %s\n", firstName, secondName);
  printf("%*d %*d\n", firstLen, firstLen, secondLen, secondLen);
  printf("%s %s\n", firstName, secondName);
  printf("%-*d %-*d\n", firstLen, firstLen, secondLen, secondLen);
  return 0;
}
