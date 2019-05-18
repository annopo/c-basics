#include <stdio.h>

void kazuchange(int *);

int main(int argc, const char *argv[]) {
  int *p; //ポインタ変数p
  int a = 5;
  p = &a;        //ポインタ変数にaのメモリアドレスを代入
  kazuchange(p); //値を20にする関数を呼び出し
  printf("aの値は%dです\n", a);
  return 0;
}
void kazuchange(int *p) { *p = 20; }
