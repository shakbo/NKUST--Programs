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
  int nums[3] = {}; //宣告整數陣列，3代表可以儲存3個值。
  int ArraySize = 3; //宣告整數，用以方便管理後面的for迴圈。
  int temp; //宣告整數，用於暫存值。

  printf("請輸入 a 的值 > "); //輸出函數，提示使用者輸入。
  nums[0] = GetINT(); //取得使用者輸入的值，並存於 陣列第 0 位。

  printf("請輸入 b 的值 > "); //輸出函數，提示使用者輸入。
  nums[1] = GetINT(); //取得使用者輸入的值，並存於 陣列第 1 位

  printf("請輸入 c 的值 > "); //輸出函數，提示使用者輸入。
  nums[2] = GetINT(); //取得使用者輸入的值，並存於 陣列第 2 位

  for(int i = 0; i < ArraySize; i++) { //設定 i 的值為 0，當 i 小於 ArrarySize 時，i = i + 1。
    for(int j = i + 1; j < ArraySize; j++) { //設定 j 的值為 i + 1，當 j 小於 ArrarySize 時，j = j + 1。
      if(nums[i] < nums[j]) { //判斷陣列第 i 位是否小於陣列第 j 位。
        temp = nums[i]; //變更 temp 的值為陣列第 i 位。
        nums[i] = nums[j]; //變更陣列第 i 位的值為陣列第 j 位。
        nums[j] = temp; //變更陣列第 j 位的值為temp。
      }
    }
  }

  printf("%d > %d > %d\n\n", nums[0], nums[1], nums[2]); //輸出函數，顯示排序後的順序。
  system("pause"); //暫停程式，防止視窗提前關閉。
}