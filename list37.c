#include <stdio.h>
#define SIZE 3
int main(void) {
  int scores[SIZE], sum = 0;
  for (int i = 0; i < SIZE; i++) {
    printf("Input score %d: ", i);
    scanf("%d", &scores[i]);
  }
  for (int i = 0; i < 3; i++)
    sum += scores[i];
  printf("Total is %d.\n", sum);
  return 0;
}