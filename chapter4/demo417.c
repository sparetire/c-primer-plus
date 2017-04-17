#include <stdio.h>

int main(int argc, char** argv) {
  int n;
  printf("Please ente three integers: \n");
  scanf("%*d %*d %d", &n);
  printf("The last integer was %d\n", n);
  return 0;
}
