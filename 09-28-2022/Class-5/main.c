#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x, y; //宣告整數 x 和 y 用於紀錄使用者輸入的值。

  printf("請輸入蛋的數量 > "); //輸出函數，提示使用者輸入。
  scanf("%d", &x); //取得使用者輸入的值，並存於 x。

  printf("請輸入幾顆蛋為一盒 > "); //輸出函數，提示使用者輸入。
  scanf("%d", &y); //取得使用者輸入的值，並存於 y。
  printf("\n"); //換行。

  int Box = x/y; //除法求整數。
  int LeftEggs = x%y; //除法求餘數。

  printf("共有%d盒蛋。\n剩下%d個蛋。\n\n", Box, LeftEggs); //輸出函數，顯示計算出的值。

  system("pause"); //暫停程式，防止視窗提前關閉。
}