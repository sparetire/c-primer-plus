#include <stdio.h>

int main(int argc, char** argv) {
  long num;
  long sum = 0L;
  int status;

  printf("Please enter a integer to be summed.\n");
  printf("(q to quit)\n");
  status = scanf("%ld", &num);
  while (status = 1) {
    sum = sum + num;
    printf("Please enter next integer (q to quit)\n");
    status = scanf("%ld", &num);
  }
  printf("Those integers sum to %ld.\n", sum);
  return 0;
}
