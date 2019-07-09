#include <stdio.h>

unsigned str_length(const char str[]){
    unsigned len = 0;
    while (str[len])
        len++;
    return len;
}

void rev_str(char str[]){
    int i;
    int len = str_length(str);
    for (i=0; i<len/2; i++){
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}

int main(void){
    char str[100];
    
    printf("Input strings: ");
    scanf("%s", str);

    rev_str(str);

    printf("%s\n", str);

    return 0;
}