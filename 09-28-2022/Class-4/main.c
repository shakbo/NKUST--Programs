#include <stdio.h>
#include <stdlib.h>

int main() {
  int a; //宣告整數 a 用於紀錄使用者輸入的值。
  printf("請輸入給 a 的整數 > "); //輸出函數，提示使用者輸入。
  scanf("%d", &a); //取得使用者輸入的值，並存於 a。
  printf("整數 a 的值為 > %d\n\n", a); //輸出函數，顯示a的值。
  system("pause"); //暫停程式，防止視窗提前關閉。
}