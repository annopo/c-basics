#include <stdio.h>

int main(int argc, const char * argv[]){
    int x[5];
    int sum=0;
    for (int i = 0; i < 5; i++)
    {
        printf("%d番目の数字を入力してください。\t", i);
        scanf("%d", &x[i]);
        sum += x[i];
    }
    printf("合計は%dです。\n", sum);
    for (int i = 0; i < 5; i++)
    {
        printf("x[%d]の値は%dです。\n", i, x[i]);
    }
    return 0;
}