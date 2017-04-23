#include <stdio.h>

int main(int argc, char** argv) {
  int n = 0;
  size_t intsize = sizeof(int);
  printf("n = %d, n has %zd bytes: all ints have %zd bytes.\n", n, sizeof n, intsize);
  return 0;
}
