#include <stdio.h>

static int sum = 10;
void keisan(void);

void keisan() {
  int x = 200;
  sum += x;
}
int main(int argc, const char *argv[]) {
  int x = 50;
  sum += x;
  keisan();
  printf("sumの値は%dです。\n", sum);
  return 0;
}