// This is Work in Progress

#include <stdio.h>
#include <stdlib.h>

int list_all_prime(int number) {
  int count = 0;
  for(int i=2; i<number; i++) {
    for(int j=i; j<i/2; j++) {
      if(i%j==0) printf("%d\n", i);
    }
  }
  return 0;
}

int main() {
  int N;
  printf("請輸入數字: ");
  scanf("%d", &N);

  list_all_prime(N);

  return 0;
}