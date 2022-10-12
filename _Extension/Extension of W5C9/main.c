#include <stdio.h>
#include <stdlib.h>

int main() {
  int year;
  
  printf("輸入 -1 來退出\n");

  while(year!=-1) {
    printf("請輸入西元年 > ");
    scanf("%d", &year);

    if(year<=0) printf("%d 不存在!", year);
    else if((year%400==0) || ((year%4)==0 && (year%100)!=0)) printf("%d 是閏年", year);
    else printf("%d 不是閏年", year) ;

    printf("\n\n");
  }
  //system("pause");
}