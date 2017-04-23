#include <stdio.h>

int main(int argc, char** argv) {
  int start = 0;
  scanf("%d", &start);
  for (int end = start + 11; start < end; ++start) {
    printf("%d\n", start);
  }
  return 0;
}
