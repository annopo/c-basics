#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){
    int a=0;
    srand((unsigned)time(NULL));
    //0~5の整数乱数を生成
    a = (int)(rand()/(RAND_MAX+1.0)*6);
    printf("Result is %d.\n", a+1);

    return 0;
}