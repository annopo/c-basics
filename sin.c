#include <stdio.h>
#include <tgmath.h>

int main(void){
    double rad, x;
    //10度ずつ増やしてラジアンに変換し、sinの値を計算する
    x = 0.0;
    while(x <= 180){
        rad = x*M_PI/180.0;
        printf("x=%5.1f : %8.6f\n", x, sin(rad));
        x += 10.0;
   }
   return 0;
}