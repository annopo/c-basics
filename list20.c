#include <stdio.h>

int main(int argc, const char *argv[]) {
  int i;
  int sum;

  printf("数字を入力してください。:\n");

  while (i != 0) {
    scanf("%d", &i);
    i += i;
    sum = i;
    break;
  }
  printf("合計はsumです。\n");

  return 0;
}
