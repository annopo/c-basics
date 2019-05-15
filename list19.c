#include <stdio.h>

int main(int argc, const char *argv[]) {
  int age;
  printf("年齢を入力してください。:");
  scanf("%d", &age);

  if (age >= 20) {
    printf("成人です。\n");
  } else {
    printf("未成年です。\n");
  }
  return 0;
}