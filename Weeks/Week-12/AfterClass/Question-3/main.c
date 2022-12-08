#include <stdio.h>
#include <stdlib.h>

int main() {
  int original_price=0;
  double calculated_price=0.0;

  printf("請輸入金額: ");
  scanf("%d", &original_price);

  if((original_price >= 100) && (original_price < 1000)) calculated_price = original_price * 0.95;
  else if((original_price >= 1000) && (original_price < 10000)) calculated_price = original_price * 0.9;
  else if(original_price >= 10000) calculated_price = original_price * 0.85;

  printf("應付價格: %lf", calculated_price);  

  printf("\n\n");
  system("pause");
}