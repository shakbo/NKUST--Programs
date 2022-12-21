// 設計一函數，使用者輸入第一年存入金額、利率、存入幾年，回傳期末金額
// fun(10000, 0.04, 15)
// fun(30000, 0.06, 20)
#include <stdio.h>
#include <stdlib.h>

double finalMoney(double money, double rate, double years) {
  for(int i=0; i<years; i++) {
    money *= (1+rate);
  }
  return money;
}

int main() {
  double money, rate;
  int years;

  printf("請輸入金額: ");
  scanf("%lf", &money);

  printf("請輸入利率: ");
  scanf("%lf", &rate);

  printf("請輸入存幾年: ");
  scanf("%d", &years);

  money = finalMoney(money, rate, years);
  printf("期末金額= %lf", money);
}