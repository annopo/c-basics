#include <stdio.h>
#define SIZE 3

int main(void){
    int i, data[SIZE][3], quant_total=0, total=0; 
    for(i=0; i<SIZE; i++){
        printf("Input a unit price and quantity (unit, quant):");
        scanf("%d, %d", &data[i][0], &data[i][1]);
        data[i][2] = data[i][0] * data[i][1];
    }
    for(i=0; i<SIZE; i++){
        quant_total += data[i][1];
        total += data[i][2];
    }
    printf("unit | quant || subtotal\n");
    printf("------------------------\n");
    for(i=0; i<SIZE; i++)
        printf(" %4d | %5d || %8d\n", data[i][0], data[i][1], data[i][2]);
    printf("------------------------\n");
    printf("total | %5d || %8d\n", quant_total, total);

    return 0;
}