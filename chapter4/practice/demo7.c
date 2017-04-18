#include <stdio.h>

#define G 3.785
#define S 1.609

int main(int argc, char** argv) {
  double s, g;
  scanf("%lf %lf", &s, &g);
  printf("%.1f %.1f\n", s / g, (g * G) / (s * S) * 100);
  return 0;
}
