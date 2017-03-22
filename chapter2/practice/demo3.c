#include <stdio.h>
#define YEAR_DAYS 365

int main(int argc, char** argv) {
  int ageYear = 24;
  printf("My age is %d\n", ageYear);
  printf("About %d days\n", ageYear * YEAR_DAYS);
  return 0;
}
