#include <stdio.h>

int main(int argc, const char *argv[]) {
  // 1から10までの数字を足して合計を求めるプログラム
  int sum = 0;
  int c = 1;
  // for文でループ
  for (c = 1; c <= 10; c++) {
    sum += c;
  }
  printf("1から10までの合計は%dです。\n", sum);
  return 0;
}