#include <stdio.h>
#define N 20
int main(void) {
  int i, score[N], insert_id, insert_score;
  for (i = 0; i < N; i++) {
    score[i] = (i * 83 + 11) % 101;
  }
  printf("%d", score[0]);
  for (i=1; i<N; i++) {
    printf(", %d", score[i]);
  }
  printf("\n");

  //insert
  printf("Input insert ID and score:");
  scanf("%d, %d", &insert_id, &insert_score);

  for (i=N; i>=insert_id; i--)
      score[i+1] = score[i];
  score[insert_id] = insert_score;
  printf("%d", score[0]);
  for (i=1; i<N+1; i++){
      printf(", %d", score[i]);
  }  
  printf("\n");
  return 0;
}