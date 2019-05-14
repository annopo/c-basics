#include <stdio.h>

int main(int argc, const char *argv[]) {
  // aが0か1か判定します。
  int a = 2;
  switch (a) {
  case 0:
    printf("aは0です。\n");
    break;
  case 1:
    printf("aは1です。\n");
    break;
  default:
    printf("aは0でも1でもありません。\n");
    break;
  }
  return 0;
}