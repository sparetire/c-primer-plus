#include <stdio.h>

int main(int argc, char** argv) {
  double year = 3.156e+7;
  int age = 0;
  printf("Please input you age:\n");
  scanf("%d", &age);
  printf("%f\n", year * age);
  return 0;
}
