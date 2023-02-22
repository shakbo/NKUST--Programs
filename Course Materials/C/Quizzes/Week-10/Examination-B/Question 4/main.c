#include <stdio.h>
#include <stdlib.h>

int main() {
  int m=0, sum=0;

  printf("Please input an integer: ");
  scanf("%d", &m);

  for(int i=0; i<=m ; i++) {
    if(i%2 == 0) {
      sum += i;
    }
  }

  printf("The sum of even number: %d", sum);

  return 0;
}