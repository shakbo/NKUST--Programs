//請設計一個C程式(限用函數)，可供使用者進行換取錢幣(10元、5元或1元)，該函數的猜數為任意金額。
//請顯示換取錢幣後可能的組合，並顯示每一個組合的硬幣總個數。
#include <stdio.h>
#include <stdlib.h>

int convertToCoin(int cash) {
  int dollar_10_Amount=0, dollar_5_Amount=0, dollar_1_Amount=0;
  int totalCoinsAmount;

  dollar_10_Amount = cash / 10;
  cash -= dollar_10_Amount*10;

  dollar_5_Amount = cash / 5;
  cash -= dollar_5_Amount*5;

  dollar_1_Amount = cash;

  totalCoinsAmount = dollar_10_Amount + dollar_5_Amount + dollar_1_Amount;
  printf("總共可以換\n%3d 個 10元\n%3d 個 \t5元\n%3d 個 \t1元\n", dollar_10_Amount, dollar_5_Amount, dollar_1_Amount);

  return totalCoinsAmount;
}

int main() {
  int cash;
  int totalCoinsAmount=0;

  printf("請輸入金額: ");
  scanf("%d", &cash);

  totalCoinsAmount = convertToCoin(cash);
  printf("共有 %3d 個硬幣", totalCoinsAmount);

  return 0;
}