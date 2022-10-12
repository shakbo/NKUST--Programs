#include <stdio.h>
#include <stdlib.h>

int main() {
  //迴圈， for 迴圈
  //在螢幕上印出10行hello!

  int i;
  for(i=1; i<=10; i++) { //迴圈跑10次，for(起始值; 檢查條件; 起始值 = 起始值 + 1)。
    printf("Hello!\n");
  }
  printf("迴圈結束後 i=%d", i);

  printf("\n\n"); //換行。
  system("pause"); //暫停程式，防止視窗提前關閉。
}