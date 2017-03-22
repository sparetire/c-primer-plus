#include <stdio.h>

/**
 * gcc must have an static
 */
static inline int sum(int a, int b) {
  return a + b;
}

static inline int mpow(int num, int n) {
  int rst = 1;
  for (int i = 0; i < n; ++i) {
    rst *= num;
  }
  return rst;
}

/*inline int sum(int, int);*/
/*inline int mpow(int, int);*/

int main(int argc, char** argv) {
  int toes = 10;
  printf("The init value of toes is %d\n", toes);
  printf("Double of toes is %d\n", sum(toes, toes));
  printf("toes * toes is %d\n", mpow(toes, 2));
  return 0;
}
