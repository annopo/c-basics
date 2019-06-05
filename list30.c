#include <stdio.h>

int main(void) {
  double age;
  printf("Input your age: ");
  scanf("%lf", &age);
  age = (age - 18) * 3 + 2;
  printf("Lucky number is %f.\n", age);
  return 0;
}