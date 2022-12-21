/*
  某城市現有男性 35000 人，女性 30000 人，
  其中男性以每年 3% 的比例遞增，女性以每年 7% 的比例遞增。
  請設計一C程式，計算在第幾年後女性的總人口可超越男性?
  (限用具傳回值的函數)
*/
#include <stdio.h>
#include <stdlib.h>

int function(int men, double rate_men, int women, double rate_women) {
  int years = 0;
  while (men>women) {
    men *= (1+rate_men);
    women *= (1+rate_women);
    years += 1;
    printf("第%d年總人口數(男/女)=(%d/%d)\n", years, men, women);
  }
  return years;
}

int main() {
  int ans;
  ans = function(35000, 0.03, 30000, 0.07);
  printf("%d 年後女生人數會超越男生", ans);
}