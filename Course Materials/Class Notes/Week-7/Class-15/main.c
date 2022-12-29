// 存入銀行10000元 (浮點數)
// 利率 4.5% (浮點數)
// 列出20年每一年的本利和

#include <stdio.h>
#include <stdlib.h>
int main() {
  float total, rate;
  int years;

  for(int k=1; k<=5; k++) {
    printf("請輸入欲存入的金額(NT$) > ");
    scanf("%f", &total);

    printf("請輸入利率(%) > ");
    scanf("%f", &rate);
    rate=rate/100;

    printf("請輸入幾年 > ");
    scanf("%d", &years);

    for(int i=1; i<=years; i++) {
      total = total + total*rate; //10450=10000+10000*0.045
      printf("第 %d 年年尾金額: %f\n", i, total);
    }

    printf("\n");
  }

  printf("\n\n");
  system("pause");
}