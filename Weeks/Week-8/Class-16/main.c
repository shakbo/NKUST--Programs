// 輸入一個金額 10000
// 輸入年利率 0.05
// 列出多少年後金額會超過 30000

#include <stdio.h>
#include <stdlib.h>

int main() {
  float total, rate;
  int year=0;
  total=10000;
  rate=0.05;
  while (total<=15000) {
    total=total*(1+rate);
    year++;
    printf("第 %d 年\n", year);
    printf("金額: %f\n", total);
  }

  printf("\n\n");
  system("pause");
}