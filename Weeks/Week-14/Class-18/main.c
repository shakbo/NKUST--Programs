#include <stdio.h>
#include <stdlib.h>

int add_from_1_to_given_num(int num) {
  int sum=0;

  for(int i=0; i<=num; i++) {
    sum += i;
  }
  
//  sum = ((1 + num) * num) / 2; // 公式解

  return sum;
}

int main() {
  int num, result;

  printf("請輸入num: ");
  scanf("%d", &num);

  result = add_from_1_to_given_num(num);
  printf("num= %d", result);

  return 0;
}