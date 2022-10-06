#include <stdio.h>
#include <stdlib.h>

int main() {
  int a= 25, b= 8; //宣告整數 a 為 25 和 b 為 8。

  int a_plus_b= a+b   //加法。
    , a_minus_b= a-b  //減法。
    , a_times_b= a*b  //乘法。
    , a_divide_b= a/b //除法求整數。
    , a_mod_b= a%b;   //除法求餘數。

  printf("1. a+b=%d\n"
         "2. a-b=%d\n"
         "3. a*b=%d\n"
         "4. a/b=%d\n"
         "5. a%b=%d\n"
        , a_plus_b
        , a_minus_b
        , a_times_b
        , a_divide_b
        , a_mod_b
        );

  system("pause"); //暫停程式，防止視窗提前關閉。
}