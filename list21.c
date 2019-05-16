#include <stdio.h>

int main(void) {
  int sum = 0, i;
  for (i = 0; i <= 100; i++) {
    sum += i;
  }
  printf("Answer is %d.\n", sum);
  return 0;
}