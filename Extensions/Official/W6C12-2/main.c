#include <stdio.h>
#include <stdlib.h>

int main() {
  int n=0;
  int factorCounter=0, evenCounter=0, oddCounter=0; //宣告計數器並歸零

  printf("請輸入一個整數: ");
  scanf("%d", &n);

  int *evenNums, *oddNums;
  evenNums = malloc(sizeof(int)*n);
  oddNums = malloc(sizeof(int)*n);

  for(int i=0; i<n; i++) {
    evenNums[i] = 0;
    oddNums[i] = 0;
  }

  for(int i=1; i<=n; i++) { // 檢查1到n中所有的數，哪些是n的因數。
    if(n%i==0) {
      if(i%2==0) { // 判斷因數以2除是否為0
        evenNums[evenCounter] = i;
        evenCounter++;
      } else {
        oddNums[oddCounter] = i;
        oddCounter++;
      }
      factorCounter++;
    }
  }

  printf("\n共有 %d 個因數\n\n", factorCounter); //印出有幾個因數

  int oddNumSize = (sizeof(oddNums)/sizeof(*oddNums));
  int evenNumSize = (sizeof(evenNums)/sizeof(*evenNums));

  printf("其中有 %d 個是奇數，有: \n", oddCounter);
  for(int i=0; i<=oddNumSize; i++) {
    if(oddNums[i]==0) break;
    printf("%3d\n", oddNums[i]);
  }

  printf("\n\n");

  printf("其中有 %d 個是偶數，有: \n", evenCounter);
  for(int i=0; i<=evenNumSize; i++) {
    if(evenNums[i]==0) break;
    printf("%3d\n", evenNums[i]);
  }

  printf("\n\n");

return 0;
}