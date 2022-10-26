#include <stdio.h>
#include <stdlib.h>
int main() {
  int n;
  int factorCounter=0; //宣告計數器並歸零
  int EvenCounter=0; //宣告計數器並歸零
  int OddCounter=0; //宣告計數器並歸零
  
  printf("請輸入一個整數 > ");
  scanf("%d", &n);

  printf("\n因數有: \n");

  for(int i=1; i<=n; i++) { // 檢查1到n中所有的數，哪些是n的因數。
    if(n%i==0) {
      printf("%d\n", i);
      factorCounter++;
    }
  }
  printf("\n總共有 %d 個因數\n", factorCounter); //印出有幾個因數

  if(factorCounter==2) printf("%d 是質數\n", n);
  else printf("%d 不是質數\n", n);

  printf("\n\n");
  system("pause");
}