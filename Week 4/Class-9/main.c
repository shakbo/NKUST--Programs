#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, c, d; //宣告整數 a b c，用於儲存使用者輸入及比較大小。
  int min = 2147483647;

  printf("請輸入 a 的值 > "); //輸出函數，提示使用者輸入。
  scanf("%d", &a); //取得使用者輸入的值，並存於 a。

  printf("請輸入 b 的值 > "); //輸出函數，提示使用者輸入。
  scanf("%d", &b); //取得使用者輸入的值，並存於 b。

  printf("請輸入 c 的值 > "); //輸出函數，提示使用者輸入。
  scanf("%d", &c); //取得使用者輸入的值，並存於 c。

  printf("請輸入 d 的值 > "); //輸出函數，提示使用者輸入。
  scanf("%d", &d); //取得使用者輸入的值，並存於 d。

  if (a < min) min = a; //如果 a 比 min 大，用 a 的值取代 min 的值。
  if (b < min) min = b; //如果 b 比 min 大，用 b 的值取代 min 的值。
  if (c < min) min = c; //如果 c 比 min 大，用 c 的值取代 min 的值。
  if (d < min) min = d; //如果 d 比 min 大，用 d 的值取代 min 的值。

  printf("最大值為 %d", min);

  printf("\n\n"); //換行。
  system("pause"); //暫停程式，防止視窗提前關閉。
}