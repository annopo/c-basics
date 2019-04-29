#include <stdio.h>

int main(int argc, const char *argv[]){
    //1から10までの数字を足して合計を求めるプログラム
    int sum=0;
    int c=1;
    //while文でループ
    while (c<=10){
        sum += c; //sum=sum+cのこと
        c++; //c=c+1のこと
    }
    printf("1から10までの合計は%dです。\n", sum);
    return 0;
}