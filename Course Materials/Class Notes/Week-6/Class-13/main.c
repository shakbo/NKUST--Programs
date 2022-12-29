//華氏(°F) = 攝氏(°C)*(9/5)+32

#include <stdio.h>
#include <stdlib.h>

int main() {
  float c; // 宣告一個浮點數(Floating number)有小數點， 攝氏溫度(°C)
  float f; // 宣告一個浮點數(Floating number)有小數點， 華氏溫度(°F)

  printf("請輸入攝氏溫度 > ");
  scanf("%f", &c); // 對應福點數, 使用%f

  //f = c*(9/5)+32; // 使用整數除法
  f = c*(9/5.0)+32; // 加上5.0, 使用浮點數除法

  printf("華氏溫度 > %.2f °F", f);

  printf("\n\n");
  system("pause");
}