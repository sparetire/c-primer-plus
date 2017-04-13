#include <stdio.h>

int main(int argc, char** argv) {
  double inch = 2.54;
  int height = 0;
  printf("Please input the height\n");
  scanf("%d", &height);
  printf("Height is %fcm", height * inch);
  return 0;
}
