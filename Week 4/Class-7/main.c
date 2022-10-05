#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, c; //宣告整數 a b c，用於儲存使用者輸入及比較大小。

  printf("請輸入 a 的值 > "); //輸出函數，提示使用者輸入。
  scanf("%d", &a); //取得使用者輸入的值，並存於 a。

  printf("請輸入 b 的值 > "); //輸出函數，提示使用者輸入。
  scanf("%d", &b); //取得使用者輸入的值，並存於 b。

  printf("請輸入 c 的值 > "); //輸出函數，提示使用者輸入。
  scanf("%d", &c); //取得使用者輸入的值，並存於 c。

  if ((a > b) && (b > c)) printf("%d > %d > %d", a, b, c); //組合邏輯加最簡化比大小
  else if ((a > c) && (c > b)) printf("%d > %d > %d", a, c, b); //組合邏輯加最簡化比大小
  else if ((b > a) && (a > c)) printf("%d > %d > %d", b, a, c); //組合邏輯加最簡化比大小
  else if ((b > c) && (c > a)) printf("%d > %d > %d", b, c, a); //組合邏輯加最簡化比大小
  else if ((c > a) && (a > b)) printf("%d > %d > %d", c, a, b); //組合邏輯加最簡化比大小
  else printf("%d > %d > %d", c, b, a); //組合邏輯加最簡化比大小

  printf("\n\n"); //換行。
  system("pause"); //暫停程式，防止視窗提前關閉。
}