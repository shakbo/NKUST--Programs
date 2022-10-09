#include <stdio.h>

int GetINT(void) {
  int input; //宣告整數，用於輸入暫存。

  while (!(scanf("%d", &input) && getchar() == '\n')) { //判斷數值是否符合要求。
    while (getchar() != '\n'); //清除 getchar() 的暫存值。
    printf("無效數值! 請重新輸入 > "); //輸出函數，提示使用者再輸入。
  }

  return input; //回傳暫存的值。
}

/*
  上方函數的原始版本
  其含有要傳送的訊息的設定值

  int scanint(const char *const message) {
      int value;

      printf("%s > ", message);
      while (scanf("%d", &value) != 1) {
          int chr;
          printf("\t無效數值! 請重新輸入 > \n");
          do {
              chr = getchar();
          } while ((chr != EOF) && (chr != '\n'));
          printf("%s > ", message);
      }
      return value;
  }
*/

void Logic(void) {
  int x, y; //宣告整數 x 和 y ，用於紀錄使用者輸入的值。

  printf("請輸入蛋的數量 > "); //輸出函數，提示使用者輸入。
  x = GetINT(); //取得使用者輸入的值，並存於 x。

  printf("請輸入幾顆蛋為一盒 > "); //輸出函數，提示使用者輸入。
  y = GetINT(); //取得使用者輸入的值，並存於 y。
  printf("\n"); //換行。

  int Box = x/y; //除法求整數。
  int LeftEggs = x%y; //除法求餘數。

  printf("共有%d盒蛋。\n剩下%d個蛋。\n", Box, LeftEggs); //輸出函數，顯示計算出的值。
  printf("\n"); //換行。
}

int main(void) {
  system("chcp 65001"); //UTF-8 主控台字碼頁 
  system("cls"); //清除命令提示字元
  
  int done=0, IsContinue=0; //宣告整數，用於判斷是否繼續。
  while (done==0) { //使函數陷入"死"循環，一般不建議這麼使用。
    Logic(); //呼叫主邏輯函數。

    printf("再算一次? [1/0] > ");  //輸出函數，提示使用者輸入是否繼續，1=繼續 0=退出。
    IsContinue = GetINT(); //取得使用者輸入的值，並存於 IsContinue。
    printf("\n"); //換行。
    
    if(IsContinue) done=0; //如果繼續把 done 設為 0，繼續進入循環。
    else break; //反之則直接退出。
  }
}