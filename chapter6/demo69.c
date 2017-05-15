#include <stdio.h>

int main(int argc, char** argv) {
  long num;
  long sum = 0;
  _Bool input_is_good;
  printf("Please enter an integer to be summed.\n");
  printf("(q to quit)\n");
  input_is_good = (scanf("%ld", &num) == 1);

  while (input_is_good) {
    sum = sum + num;
    printf("Please enter next integer to be summed (q to quit).\n");
    input_is_good = (scanf("%ld", &num) == 1);
  }
  printf("Those integers sum to %ld\n", sum);
  return 0;
}
