#include <stdio.h>
#include <stdlib.h>

int add_from_1_to_given_number(int target) { // 設計函數(名稱自訂)，有一個參數target
  int summary=0; //總和

  for(int i=0; i<=target; i++) {
    summary += i;
  }
  
//  summary = ((1 + target) * target) / 2; // 公式解

  return summary; // 將函數最終的答案丟給(回傳)主程式(因為主程式呼叫該函數)
} 

int main() { // 主程式
  int number, result;

  printf("請輸入number: ");
  scanf("%d", &number);

  // 計算 1+2+3+...+number
  result = add_from_1_to_given_number(number); // 呼叫函數，副程式
  printf("result= %d", result);

  return 0;
}