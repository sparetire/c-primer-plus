#include <stdio.h>
#define COUNT 3

void func0();
void func1();

int main(int argc, char** argv) {
  for (int i = 0; i < COUNT; ++i) {
    func0();
  }
  func1();
  return 0;
}

void func0() {
  printf("For he's a jolly good fellow!\n");

}

void func1() {
  printf("Which nobody can deny!\n");
}
