#include <stdio.h>
#define SIZE 20
int main(void) {
  int i, score[SIZE], max = 0;
  for (i = 0; i < SIZE; i++) {
    score[i] = (i * 83 + 11) % 101;
  }
  printf("%d", score[0]);
  for (i = 1; i < SIZE; i++) {
    printf(", %d", score[i]);
  }
  printf("\n");

  for (i = 0; i < SIZE; i++) {
    if (max < score[i])
      max = score[i];
  }
  printf("Highest score is %d.\n", max);

  return 0;
}