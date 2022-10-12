#include <stdio.h>
#include <stdlib.h>

int main() {
  int year; //宣告整數 year，用於儲存使用者輸入。
  
  printf("請輸入西元年 > "); //輸出函數，提示使用者輸入。
  scanf("%d", &year); //取得使用者輸入的值，並存於 year。

  //寫法一
  if (year % 400 == 0) { //判斷能否被 400 整除。
    printf("%d 是閏年", year); //輸出函數，告知使用者是閏年。
  } else if ((year % 4 == 0) && (year % 100 != 0)) { //判斷能否被 4 整除且不能被 100 整除。
    printf("%d 是閏年", year); //輸出函數，告知使用者是閏年。
  } else { //都不行的話會進到這裡
    printf("%d 不是閏年", year); //輸出函數，告知使用者不是閏年。
  }

  //寫法二
  if((year%400==0) || ((year%4)==0 && (year%100)!=0)) { //判斷能否被 400 整除 或者 能否被 4 整除且不能被 100 整除。
     printf("%d 是閏年", year); //輸出函數，告知使用者是閏年。
  } else { //不行的話會進到這裡
    printf("%d 不是閏年", year); //輸出函數，告知使用者不是閏年。
  }
  
  printf("\n\n"); //換行。
  system("pause"); //暫停程式，防止視窗提前關閉。
}