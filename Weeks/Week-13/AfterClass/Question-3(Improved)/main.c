#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() {
  while (1)
  {
    printf("離開程式請輸入 -1\n");
    printf("--------------------\n");
    int original_price=0;
    double calculated_price=0.0;

    do
    {
      printf("請輸入金額: ");
      scanf("%d", &original_price);
      if((original_price <= 0) && (original_price != -1)) printf("無效輸入! ");
      else if((original_price <= 0) && (original_price == -1)) return 0;
    } while (original_price <= 0);

    if(original_price < 100) calculated_price = original_price;
    else if((original_price >= 100) && (original_price < 1000)) calculated_price = original_price * 0.95;
    else if((original_price >= 1000) && (original_price < 10000)) calculated_price = original_price * 0.9;
    else if(original_price >= 10000) calculated_price = original_price * 0.85;

    printf("應付價格: %lf\n", calculated_price);
    printf("--------------------\n");
  }

  printf("\n\n");
  system("pause");
}