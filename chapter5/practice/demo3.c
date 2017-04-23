#include <stdio.h>

#define DAY_PER_WEEK 7

int main(int argc, char** argv) {
  int days = 0;
  printf("Please enter days:\n");
  scanf("%d", &days);
  printf("%d days are %d weeks, %d days\n", days, days / DAY_PER_WEEK, days % DAY_PER_WEEK);
  return 0;
}
