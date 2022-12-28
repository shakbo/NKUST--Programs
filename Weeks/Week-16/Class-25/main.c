//請設計一個C程式(限用函數)，可供使用者進行換取錢幣(10元、5元或1元)，該函數的猜數為任意金額。
//請顯示換取錢幣後可能的組合，並顯示每一個組合的硬幣總個數。
#include <stdio.h>
#include <stdlib.h>

int convertToCoin(int cash) {
  int totalAmout=0;
  for(int d10=0; d10<=cash/10; d10++) {
    for(int d5=0; d5<=cash/5; d5++) {
      int d1 = cash - d10*10 - d5*5;
      if(d1 >= 0) {
        printf("%3d個 10元 /%3d個 5元 /%3d個 1元\n", d10, d5, d1);
        totalAmout++;
      }
    }
  }
  return totalAmout;
}

int main() {
  int cash;
  int totalCoinsAmount=0;

  printf("請輸入金額: ");
  scanf("%d", &cash);

  printf("共有以下組合: \n");
  totalCoinsAmount = convertToCoin(cash);
  printf("共有 %3d 個硬幣", totalCoinsAmount);

  return 0;
}