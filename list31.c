#include <stdio.h>

int main(void) {
  int a, b, c, sum;
  double avg;
  printf("Input three integers:\n");
  printf("a:");
  scanf("%d", &a);
  printf("b:");
  scanf("%d", &b);
  printf("c:");
  scanf("%d", &c);
  sum = a + b + c;
  avg = (double)sum / 3;

  printf("Sum is %d, Average is %.1f.\n", sum, avg);
  return 0;
}