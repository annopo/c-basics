#include <stdio.h>

int main(int argc, const char *argv[]) {
  // 2つの数字を入力して四則演算の結果を表示
  int a, b, c;
  printf("1つ目の数字を入力してください。\t");
  scanf("%d", &a);
  printf("2つ目の数字を入力してください。\t");
  scanf("%d", &b);

  c = a + b;
  printf("a+bは%dです。\n", c);
  c = a - b;
  printf("a-bは%dです。\n", c);
  c = a * b;
  printf("a*bは%dです。\n", c);
  c = a / b;
  printf("a/bは%dです。\n", c);

  return 0;
}