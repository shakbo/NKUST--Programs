#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int GetINT(void) {
  int input; //宣告整數，用於輸入暫存。

  printf("請輸入一個整數 > "); //輸出函數，提示使用者輸入。

  while (!(scanf("%d", &input) && getchar() == '\n')) { //判斷數值是否符合要求。
    while (getchar() != '\n'); //清除 getchar() 的暫存值。
    printf("無效數值! 請重新輸入 > "); //輸出函數，提示使用者再輸入。
  }

  return input; //回傳暫存的值。
}

void guess(int min, int max, int chances) { 
  int sys_answer = 0, usr_answer = 0; //宣告整數，用於儲存程式的答案以及使用者的猜測。
  int chances_left = 0, guessed = 0; //宣告整數，用於紀錄已猜了幾次。

  srand(time(NULL)); //建立亂數種子。

  sys_answer = (rand() % (max - min + 1) + min);

  printf("猜一個介於 %d 和 %d 之間的數字 > \n", min, max); //輸出函數，告知使用者答案範圍。

  do { //迴圈，當使用者還沒猜到答案時執行。
    if (guessed > chances - 1) {
      printf("你輸了!\n"); //輸出函數，提示遊戲結束。
      printf("答案是 %d", sys_answer);
      break;
    }

    usr_answer = GetINT(); //取得使用者輸入的值，並存於 usr_answer。
    guessed++; //將已猜的次數增加。
    chances_left = chances - guessed; //將機會(chances)與已猜的次數(guessed)相減以取得剩餘的次數(chances_left)。

    if (guessed <= chances - 1) {
      if (usr_answer > sys_answer) { //判斷 猜的值 是否大於 程式的答案。
        max = usr_answer; //降最大值設為使用者的答案
        printf("再低一點! (%d ~ %d)\n", min, max); //輸出函數，提示使用者再低，並告知範圍。
        printf("還剩下 %d 次機會", chances_left);
      } else if (usr_answer < sys_answer) { //判斷 猜的值 是否小於 程式的答案。
        min = usr_answer; //降最小值設為使用者的答案
        printf("再高一點! (%d ~ %d)\n", min, max); //輸出函數，提示使用者再高，並告知範圍。
        printf("還剩下 %d 次機會", chances_left);
      } else {
        printf("猜到啦!!"); //輸出函數，提示使用者已經猜到答案。
        break;
      }
    }
  } while ((usr_answer != sys_answer) || (guessed <= chances-1));
}

int main()  {
  system("chcp 65001"); //UTF-8 主控台字碼頁 
  system("cls"); //清除命令提示字元
  
  int min = 0, max = 100, chances = 5; //宣告遊戲基礎設定值。

  guess(min, max, chances); //呼叫遊戲邏輯。
  printf("\n\n");
  system("pause"); //暫停程式，防止視窗提前關閉。

  return 0; //安全跳出。
}