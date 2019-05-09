#include <stdio.h>

int main(void){
    double height, weight, bmi;

    printf("Input your height[cm]: ");
    scanf("%lf\n", &height);

    printf("Input your weight[kg]: ");
    scanf("%lf\n", &weight);

    bmi = 10000 * weight / (height * height);

    printf("YOUR BMI is %5.1f", bmi);

    return 0;
}