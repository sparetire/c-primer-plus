#include <stdio.h>

int main(int argc, char** argv) {
  double num;
  printf("Please enter a number:\n");
  scanf("%lf", &num);
  printf("The input is %.1f or %.1e\n", num, num);
  printf("The input is %+.3f or %.3E\n", num, num);
  return 0;
}
