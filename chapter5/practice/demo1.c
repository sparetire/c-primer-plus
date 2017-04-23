#include <stdio.h>

#define MIN_PER_H 60

int main(int argc, char** argv) {
  int min = 0;
  while (scanf("%d", &min) && min > 0) {
    printf("%d minutes is %d hours and %d minutes\n", min, min / MIN_PER_H, min % MIN_PER_H);
  }
  return 0;
}
