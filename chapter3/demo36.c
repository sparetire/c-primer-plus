#include <stdio.h>
#include <inttypes.h>

int main(void) {
  int16_t mel16;

  mel16 = 4593;
  printf("First, assume int16_t is short:\n");
  printf("mel16 = %hd\n", mel16);
  printf("Next, let's not make any assumptions.\n");
  printf("Instead, use a \"marcro\" from inttypes.h: \n");
  printf("mel16 = %" PRId16 "\n", mel16);
  return 0;
}
