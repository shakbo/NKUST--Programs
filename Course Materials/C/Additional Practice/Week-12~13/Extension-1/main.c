#include <stdio.h>
#include <stdlib.h>

int main() {
  int N, M;
  double total_N = 1.0, total_M = 1.0, total_NDM = 1.0;

  printf("請輸入數字N: ");
  scanf("%d", &N);

  printf("請輸入數字M: ");
  scanf("%d", &M);

  for(int i=1; i<=N; i++) {
    total_N *= i;
  }

  for(int i=1; i<=M; i++) {
    total_M *= i;
  }

  total_NDM = total_N/total_M;

  printf("%d!/%d! = %lf",N, M, total_NDM);

  printf("\n\n");
  system("pause");
}