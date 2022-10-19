#include <stdio.h>
#include <stdlib.h>
int main() {
  int n=0;
  int factorCounter=0; //宣告計數器並歸零
  int EvenCounter=0; //宣告計數器並歸零
  int OddCounter=0; //宣告計數器並歸零
  
  printf("請輸入一個整數 > ");
  scanf("%d", &n);

  int EvenNums[n];
  int OddNums[n];

  for(int i=0; i<=n; i++) {
    EvenNums[i] = 0;
    OddNums[i] = 0;
  }

  for(int i=1; i<=n; i++) { // 檢查1到n中所有的數，哪些是n的因數。
    if(n%i==0) {
      if(i%2==0) { // 判斷因數以2除是否為0
        EvenNums[EvenCounter] = i;
        EvenCounter++;
      } else {
        OddNums[OddCounter] = i;
        OddCounter++;
      }
      factorCounter++;
    }
  }
  printf("\n總共有 %d 個因數\n\n", factorCounter); //印出有幾個因數

  int OddNumSize = (sizeof(OddNums)/sizeof(*OddNums));
  int EvenNumSize = (sizeof(EvenNums)/sizeof(*EvenNums));

  printf("其中是奇數的有\n");
  for(int i=0; i<=OddNumSize; i++) {
    if(OddNums[i]==0) break;
    else printf("%d\n", OddNums[i]);
  }

  printf("\n\n");

  printf("其中是偶數的有\n");
  for(int i=0; i<=EvenNumSize; i++) {
    if(EvenNums[i]==0) break;
    else printf("%d\n", EvenNums[i]);
  }

  //printf("因數中有 %d 個是偶數", EvenCounter); //印出有幾個因數
  //printf("因數中有 %d 個是奇數", OddCounter); //印出有幾個因數

  printf("\n\n");
  system("pause");
}