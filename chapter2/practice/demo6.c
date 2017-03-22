#include <stdio.h>

void echo();

int main(int argc, char** argv) {
  for (int i = 3; i > 0; --i) {
    for (int j = 0; j < i; ++j) {
      echo();
    }
    printf("\n");
  }
  return 0;
}

void echo() {
  printf("Smile!");
}
