#include <stdio.h>

int main(void){
    int math, english, science, sum;
    double ave;

    printf("Input your scores:\nMath: ");
    scanf("%d", &math);
    printf("English: ");
    scanf("%d", &english);
    printf("Science: ");
    scanf("%d", &science);
    sum = math + english + science;
    ave = sum / 3;
    if(sum >= 270) printf("Your grade is A+ (Average is %.1f).\n", ave);
    else if(sum >= 240) printf("Your grade is A (Average is %.1f).\n", ave);
    else if(sum >= 210) printf("Your grade is B (Average is %.1f).\n", ave);
    else if(sum >= 180) printf("Your grade is C (Average is %.1f).\n", ave); 
    else printf("Your grade is F (Average is %.1f).\n", ave);

    return 0;
}