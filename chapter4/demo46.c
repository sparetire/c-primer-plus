#include <stdio.h>

#define PI 3.141593

int main(int argc, char** argv) {
  int number = 5;
  float expresso = 13.5;
  int cost = 3100;
  printf("The %d CEOS drank %f cups of expresso.\n", number, expresso);
  printf("The value of pi is %f.\n", PI);
  printf("Farewell! thou art too dear for my prossessing,\n");
  printf("%c%d\n", '$', 2 * cost);
  return 0;
}
