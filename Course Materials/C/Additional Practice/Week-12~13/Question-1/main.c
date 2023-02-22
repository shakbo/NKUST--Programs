#include <stdio.h>
#include <stdlib.h>

int main() {
  int N, total = 1;
  printf("請輸入數字N: ");
  scanf("%d", &N);
  for(int i=1; i<=N; i++) {
    total *= i;
  }
  printf("N! = %d", total);

  printf("\n\n");
  system("pause");
}