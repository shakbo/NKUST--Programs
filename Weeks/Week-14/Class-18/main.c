#include <stdio.h>
#include <stdlib.h>

int from_1_to_given_num(int num) {
  int sum=0;
  for(int i=0; i<=num; i++) {
    sum += i;
  }
  return sum;
}

int main() {
  int num;

  num = from_1_to_given_num(100);
  printf("num= %d", num);

  return 0;
}