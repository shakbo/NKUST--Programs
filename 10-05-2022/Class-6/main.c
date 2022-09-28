#include <stdio.h>
#include <stdlib.h>

int main() {
  int a, b, c; //宣告整數 a b c，用於儲存使用者輸入及比較大小。 

  printf("請輸入 a 的值 > "); //輸出函數，提示使用者輸入。
  scanf("%d", &a); //取得使用者輸入的值，並存於 a。

  printf("請輸入 b 的值 > "); //輸出函數，提示使用者輸入。
  scanf("%d", &b); //取得使用者輸入的值，並存於 b。

  printf("請輸入 c 的值 > "); //輸出函數，提示使用者輸入。
  scanf("%d", &c); //取得使用者輸入的值，並存於 c。

  if(a > b) { //判斷 a 是否大於 b。
    if(b > c) { //判斷 b 是否大於 c。
      printf("a > b > c");
    } else { //如果 b 小於 c。
      if(c > a) { //判斷 c 是否大於 a。
        printf("c > a > b");
      } else {
        printf("a > c > b");
      }
    }
  } else { //如果 b 小於 a。
    if(b > c) { //判斷 b 是否大於 c。
      if(c > a) { //判斷 c 是否大於 a。
        printf("b > c > a");
      } else { //如果 c 小於 a。
        printf("b > a > c");
      }
    } else { //如果 b 小於 c。
      printf("c > b > a");
    }
  }

  printf("\n\n"); //換行。
  system("pause"); //暫停程式，防止視窗提前關閉。
}