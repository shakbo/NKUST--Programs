/*
試設計一函數，計算兩數間(含)所有數之和
ex:
  F(4, 7) = 4+5+6+7 = 22
  F(1, 10) =55
*/
#include <stdio.h>
#include <stdlib.h>

int sum_from_a_to_b(int a, int b) {
  int result = 0;

  for(int i=a; i<=b; i++) {
    result += i;
  }

  return result;
}

int main() {
  int number_a, number_b, summary=0, buffer;
  printf("a= ");
  scanf("%d", &number_a);

  printf("b= ");
  scanf("%d", &number_b);

  if(number_a>number_b) {
    buffer = number_a;
    number_a = number_b;
    number_b = buffer;
  }

  summary = sum_from_a_to_b(number_a, number_b);

  printf("Sum of %d ~ %d is %d", number_a, number_b, summary);

  return 0;
}