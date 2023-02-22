// 要求使用者樹入一個整數
// 列出該整數的因數
// n=8
// 1, 2, 3, ..., 7, 8
// 8的因數 1, 2, 4, 8
// n=12
// 12的因數 1, 2, 3, 4, 6, 12

#include <stdio.h>
#include <stdlib.h>
int main() {
  int n; 
  int factorCounter=0; //宣告計數器並歸零
  
  printf("請輸入一個整數 > ");
  scanf("%d", &n);

  printf("因數有\n"); 
  for(int i=1; i<=n; i++) { // 檢查1到n中所有的數，哪些是n的因數。
    if(n%i==0) {
      factorCounter++; //計數器 +1
      printf("%d\n", i); //印出因數
    }
  }
  printf("總共有 %d 個因數", factorCounter); //印出有幾個因數

  printf("\n\n");
  system("pause");
}