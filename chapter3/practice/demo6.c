#include <stdio.h>

int main(int argc, char** argv) {
  double atomWeight = 3e-23;
  int c = 950;
  int total = 0;
  printf("Please input total num:\n");
  scanf("%d", &total);
  printf("%e\n", total * c / atomWeight);
  return 0;
}
