#include <stdio.h>
#include <stdlib.h>

int getSumFromAtoB(int start, int end) {
  int sum=0;
  for(int i=start; i<=end; i++) {
    sum += i;
  }
  return sum;
}

int main() {
  int start_number, end_number, sum;

  printf("請輸入起始值: ");
  scanf("%d", &start_number);

  printf("請輸入結束值: ");
  scanf("%d", &end_number);
  
  sum = getSumFromAtoB(start_number, end_number);

  printf("從 %d 加到 %d 的總和為: %d", start_number, end_number, sum);

  return 0;
}