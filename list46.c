#include<stdio.h>

int mark(int score){
    if(score > 80){
        return 5;
    }else if(score > 60){
        return 4;
    }else if(score > 40){
        return 3;
    }else if(score > 20){
        return 2;
    }else{
        return 1;
    }
}

int main(void){
    int scores[20];
    int rank[5];
    for(int i=0; i<20; i++){
        scores[i] = (i * 83 + 12)%101;
    }
    for(int i=0; i<20; i++){
        rank[mark(scores[i])-1]++;
    }
    for(int i=4; i>=0; i--){
        printf("Rank%d:", i+1);
        for(int j=0; j<rank[i]; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}