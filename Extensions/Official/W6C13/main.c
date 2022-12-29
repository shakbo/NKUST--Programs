//攝氏(°C) = (華氏(°F)-32)*(5/9)

#include <stdio.h>
#include <stdlib.h>

int main() {
  float c; // 宣告一個浮點數(Floating number)有小數點， 攝氏溫度(°C)
  float f; // 宣告一個浮點數(Floating number)有小數點， 華氏溫度(°F)

  printf("請輸入華氏溫度 > ");
  scanf("%f", &f); // 對應福點數, 使用%f

  c = (f-32)*(5.0/9.0);

  printf("攝氏溫度 > %.2f °C", c);

  printf("\n\n");
  system("pause");
}