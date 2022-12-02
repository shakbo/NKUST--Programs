#include <stdio.h>
#include <stdlib.h>

int main() {
  double N=1.0;

  printf("請輸入金額: ");
  scanf("%lf", &N);

  if(N >= 100.0) N *= 0.95;
  else if(N >= 1000.0) N *= 0.9;
  else if(N >= 10000.0) N *= 0.85;

  printf("應付價格: %lf", N);
  

  printf("\n\n");
  system("pause");
}