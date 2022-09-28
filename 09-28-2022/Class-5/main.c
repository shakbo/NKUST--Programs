#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x, y;

  printf("請輸入蛋的數量 > ");
  scanf("%d", &x);

  printf("請輸入幾顆蛋為一盒 > ");
  scanf("%d", &y);
  printf("\n");

  int Box = x/y;
  int LeftEggs = x%y;

  printf("共有%d盒蛋。\n剩下%d個蛋。\n\n", Box, LeftEggs);

  system("pause");
}