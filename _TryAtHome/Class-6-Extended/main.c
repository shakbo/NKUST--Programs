#include <stdio.h>
#include <stdlib.h>

int GetINT(void) {
  int input; //宣告整數，用於輸入暫存。

  while (!(scanf("%d", &input) && getchar() == '\n')) { //判斷數值是否符合要求。
    while (getchar() != '\n'); //清除 getchar() 的暫存值。
    printf("無效數值! 請重新輸入 > "); //輸出函數，提示使用者再輸入。
  }

  return input; //回傳暫存的值。
}

int main() {
  int ArraySize = 3;
  int temp;
  int nums[3] = {};

  printf("請輸入 a 的值 > ");
  nums[0] = GetINT();

  printf("請輸入 b 的值 > ");
  nums[1] = GetINT();

  printf("請輸入 c 的值 > ");
  nums[2] = GetINT();

  for(int i = 0; i < ArraySize; i++) {
    for(int j = i + 1; j < ArraySize; j++) {
      if(nums[i] < nums[j]) {
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
      }
    }
  }

  printf("%d > %d > %d\n\n", nums[0], nums[1], nums[2]);
  system("pause");
}