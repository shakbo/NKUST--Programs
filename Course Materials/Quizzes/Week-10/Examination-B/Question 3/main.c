#include <stdio.h>
#include <stdlib.h>

int main() {
  int m=0;

  printf("Please input an integer: ");
  scanf("%d", &m);

  for(int i=0; i<m+1; i++) {
    printf("%d: I love programming!\n", i+1);
  }

  return 0;
}