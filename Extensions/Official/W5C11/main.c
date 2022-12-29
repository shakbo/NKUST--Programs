#include <stdio.h>
#include <stdlib.h>

void showLeapYears(int start, int stop) {
  for(start; start <= stop; start++) {
    if((start%400==0) || ((start%4)==0 && (start%100)!=0)) printf("%d\n", start);
  }
}

int main() {
  int yearStart, yearStop;
  printf("請輸入起始年份 > ");
  scanf("%d", &yearStart);
  printf("\n");

  printf("請輸入結尾年份 > ");
  scanf("%d", &yearStop);
  printf("\n");

  printf("閏年有: \n");
  showLeapYears(yearStart, yearStop);
  printf("\n\n");
  system("pause");
}