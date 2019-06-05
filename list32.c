#include <stdio.h>

int main(void) {
  double height, weight, bmi;
  printf("Input your height[cm]: ");
  scanf("%lf", &height);
  printf("Input your weight[kg]: ");
  scanf("%lf", &weight);
  bmi = 10000 * weight / (height * height);
  printf("Your BMI is %4.1f.\n", bmi);
  return 0;
}