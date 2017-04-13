#include <stdio.h>

int main(int argc, char** argv) {
  double num = 0.0;
  scanf("%lf", &num);
  printf("The input is %f or %e\n", num, num);
  return 0;
}
