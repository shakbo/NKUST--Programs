#include <stdio.h>

int GetINT(void) {
  int input;

  while (!(scanf("%d", &input) && getchar() == '\n')) {
    while (getchar() != '\n');
    printf("無效數值! 請重新輸入 > ");
  }

  return input;
}

void Logic(void) {
  int x, y;

  printf("請輸入蛋的數量 > ");
  x = GetINT();

  printf("請輸入幾顆蛋為一盒 > ");
  y = GetINT();
  printf("\n");

  int Box = x/y;
  int LeftEggs = x%y;

  printf("共有%d盒蛋。\n剩下%d個蛋。\n", Box, LeftEggs);
  printf("\n");
}

int main(void) {
  int done=0, IsContinue=0;
  while (done==0) {
    Logic();
    printf("再算一次? [1/0] > ");
    IsContinue = GetINT();
    printf("\n");
    if(IsContinue) done=0;
    else break;
  }
}