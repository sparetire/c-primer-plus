#include <stdio.h>

int main(int argc, char** argv) {
  const int secret_code = 13;
  int code_entered;
  printf("To enter the triskaidekaphobia therapy club,\n");
  printf("please enter the secret code number\n");

  while(code_entered != secret_code) {
    printf("To enter the triskaidekaphobia therapy club,\n");
    printf("please enter the secret code number\n");
    scanf("%d", &code_entered);
  }
  printf("Congratulations! You are cured!\n");
  return 0;
}
