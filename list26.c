#include <stdio.h>

int main(int argc, const char *argv[]) {
  int x[5] = {10, 20, 30, 40, 50};
  int sum = 0;
  printf("合計は%dです。\n", sum);
  for (int i = 0; i < 5; i++) {
    printf("x[%d]の値は%dです。\n", i, x[i]);
  }
  return 0;
}