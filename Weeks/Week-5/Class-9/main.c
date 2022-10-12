#include <stdio.h>
#include <stdlib.h>

int main() {
  system("chcp 65001");
  system("cls");

  int year;

  printf("輸入 -1 來退出\n");

  while(year!=-1) {
    printf("請輸入西元年 > ");
    scanf("%d", &year);

    if(year<=0) printf("不存在!");
    else if((year%400==0) || ((year%4)==0&&(year%100)!=0)) printf("是閏年");
    else printf("不是閏年") ;

    printf("\n\n");
  }
  //system("pause");
}