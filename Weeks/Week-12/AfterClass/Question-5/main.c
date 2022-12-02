#include <stdio.h>
#include <stdlib.h>

int checkprimenumber(int cpn);

int main() {
  int N;
  printf("請輸入數字: ");
  scanf("%d", &N);

  int prime = checkprimenumber(N);
  if(prime) printf("%d 是質數", N);
  if(!prime) printf("%d 不是質數", N);

  printf("\n\n");
  system("pause");
}

int checkprimenumber(int cpn) {
  int prime = 1;
  if(cpn == 0 || cpn == 1) {
    prime = 0;
  }
  for(int i=2; i<=cpn/2; ++i) {
    if(cpn%i == 0) {
      prime = 0;
    }
  }
  return prime;
}