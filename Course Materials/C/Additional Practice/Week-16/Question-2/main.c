#include <stdio.h>
#include <stdlib.h>

int Factorial(int targetNumber) {
  int answer=1;
  for(int i=1; i<=targetNumber; i++) {
    answer *= i;
  }
  return answer;
}

void main() {
  int N, M;
  double answer;

  printf("請輸入N: ");
  scanf("%d", &N);

  printf("請輸入M: ");
  scanf("%d", &M);

  answer = Factorial(N)/Factorial(N-M);

  printf("答案: %.3lf", answer);
}