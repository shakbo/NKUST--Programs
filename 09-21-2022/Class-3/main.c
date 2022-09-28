#include <stdio.h>
#include <stdlib.h>

int main() {
  int x=160, y=12; //宣告整數 x 為 160 和 y 為 12。

  int Box = x/y; //除法求整數。
  int LeftEggs = x%y; //除法求餘數。

  printf("共有%d盒蛋。\n剩下%d個蛋。\n", Box, LeftEggs); //輸出函數，顯示計算出的值。

  system("pause"); //暫停程式，防止視窗提前關閉。
}