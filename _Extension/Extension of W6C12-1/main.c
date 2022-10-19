#include <stdio.h>
#include <stdlib.h>
int main() {
  int n;
  int factorCounter=0; //宣告計數器並歸零
  int EvenCounter=0; //宣告計數器並歸零
  int OddCounter=0; //宣告計數器並歸零
  
  printf("請輸入一個整數 > ");
  scanf("%d", &n);

  for(int i=1; i<=n; i++) { // 檢查1到n中所有的數，哪些是n的因數。
    if(n%i==0) {
      if(i%2==0) { // 判斷因數以2除是否為0
        EvenCounter++;
        printf("偶數的因數 > %d\n", i);
      } else {
        OddCounter++;
        printf("奇數的因數 > %d\n", i);
      }
      factorCounter++;
    }
  }
  printf("總共有 %d 個因數", factorCounter); //印出有幾個因數
  printf("因數中有 %d 個是偶數", EvenCounter); //印出有幾個因數
  printf("因數中有 %d 個是奇數", OddCounter); //印出有幾個因數

  printf("\n\n");
  system("pause");
}