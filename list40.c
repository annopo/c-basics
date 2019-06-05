#include <math.h>
#include <stdio.h>

double maxim(double a, double b) {
  if (a > b) {
    return a;
  } else {
    return b;
  }
}
double absol(double a) {
  if (a >= 0) {
    return a;
  } else {
    return -a;
  }
}

int main(void) {
  double x, mx, x3, max;
  printf("Input x: ");
  scanf("%lf", &x);

  x3 = x * x * x;
  mx = -x;
  max = maxim(absol(x), maxim(mx, maxim(x, x3)));

  printf("Maximum value is %.2f\n", max);

  return 0;
}