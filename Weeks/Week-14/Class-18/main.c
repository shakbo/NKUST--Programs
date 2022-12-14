#include <stdio.h>
#include <stdlib.h>

int add_from_1_to_given_number(int target) {
  int summary=0;

  for(int i=0; i<=target; i++) {
    summary += i;
  }
  
//  summary = ((1 + target) * target) / 2; // 公式解

  return summary;
} 

int main() {
  int number, result;

  printf("請輸入number: ");
  scanf("%d", &number);

  result = add_from_1_to_given_number(number);
  printf("result= %d", result);

  return 0;
}