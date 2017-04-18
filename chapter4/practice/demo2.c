#include <stdio.h>
#include <string.h>

int main(int argc, char** argv) {
  char name[20];
  int len = 0;
  printf("Please enter your name:\n");
  scanf("%s", name);
  len = strlen(name) + 3;
  printf("\"%s\"\n", name);
  printf("\"%20s\"\n", name);
  printf("\"%-20s\"\n", name);
  printf("\"%*s\"\n", len, name);
  return 0;
}
