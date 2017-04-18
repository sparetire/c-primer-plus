#include <stdio.h>

int main(int argc, char** argv) {
  double height;
  printf("Please enter your height:\n");
  scanf("%lf", &height);
  printf("Dabney, you are %.3f feet tall\n", height);
  return 0;
}
