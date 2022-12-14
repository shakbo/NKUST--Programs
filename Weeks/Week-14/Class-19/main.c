#include <stdio.h>
#include <stdlib.h>

int count_factor(int number) {
  int count=0;

  for(int i=1; i<=number; i++) {
    if(number % i==0) {
      count += 1;
    }
  }

  return count; // 將函數最終的答案丟給(回傳)主程式(因為主程式呼叫該函數)
} 

int main() { // 主程式
  int number, factor_amount;

  printf("請輸入number: ");
  scanf("%d", &number);
  
  factor_amount = count_factor(number); // 呼叫函數，副程式
  printf("%d 有 %d 個因數", number, factor_amount);

  return 0; // 告訴系統執行完畢
}