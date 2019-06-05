#include <stdio.h>

int main(void) {
  int n, sum = 0;
  printf("Input number N=: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    sum += 2 * i - 1;
  }
  printf("Answer is %d.\n", sum);

  return 0;
}