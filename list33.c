#include <stdio.h>

int main(void) {
  double height, weight, bmi;
  printf("Input your height[cm]: ");
  scanf("%lf", &height);
  printf("Input your weight[kg]: ");
  scanf("%lf", &weight);
  bmi = 10000 * weight / (height * height);
  if (bmi < 18.5)
    printf("Your BMI is %4.1f. Underweight.\n", bmi);
  else if (bmi < 25.0)
    printf("Your BMI is %4.1f. Normal.\n", bmi);
  else if (bmi < 30.0)
    printf("Your BMI is %4.1f. Pre-obese.\n", bmi);
  else
    printf("Your BMI is %4.1f. Obese class.\n", bmi);

  return 0;
}