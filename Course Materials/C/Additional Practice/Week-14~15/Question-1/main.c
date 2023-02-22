#include <stdio.h>
#include <stdlib.h>

int check_if_prime(int number) {
  int count = 0;
  for(int i=2; i<=number/2; i++) {
    if(number%i==0) count++;
  }
  if(count!=0) return 1;
  else return 0;
}

int main() {
  int number, result;
  printf("number= ");
  scanf("%d", &number);

  result = check_if_prime(number);
  if(result) printf("%d 不是質數", number);
  else printf("%d 是質數", number);

  return 0;
}