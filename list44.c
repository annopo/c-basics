#include <stdio.h>
#define SIZE 20
int eval(int a);

int main(void) {
  int i, score[SIZE];
  double total_score=0;
  for (i = 0; i < SIZE; i++) {
    score[i] = (i * 83 + 11) % 101;
  }
  printf("Before: %d", score[0]);
  for (i = 1; i < SIZE; i++) {
    printf(", %d", score[i]);
  }
  printf("\n");

  printf("After:  %2d", eval(score[0]));
  for(i = 1; i < SIZE; i++){
      printf(", %2d", eval(score[i]));
  }
  printf("\n");

  for(i = 0; i < SIZE; i++){
      total_score += eval(score[i]);
  }
  printf("Average score is %.2f.\n", total_score/20);
  
  return 0;
}

int eval(int a){
    if(a>80){
        return 5;
    }else if(a>60){
        return 4;
    }else if(a>40){
        return 3;
    }else if(a>20){
        return 2;
    }else{
        return 1;
    }
}