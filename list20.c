#include <stdio.h>

int main(int argc, const char *argv[]) {
  int sum = 0, i = -1;

  printf("数字を入力してください。:");

  while (i != 0) {
    scanf("%d", &i);
    sum += i;
  }

  printf("合計は%dです。\n", sum);
  return 0;
}
