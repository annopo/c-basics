#include <stdio.h>

int main(int argc, const char *argv[]) {
  // aが5未満かどうか判断します
  int a = 4;
  if (a < 6) {
    printf("aは6未満です。\n");
    if (a % 2 == 0) { // aが偶数かどうかを判断します
      printf("aは偶数です。\n");
    } else {
      printf("aは奇数です。\n");
    }
  }
  printf("プログラム終了\n");
  return 0;
}