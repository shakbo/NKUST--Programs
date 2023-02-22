#include <stdio.h>
#include <stdlib.h>

int main() {
  int base = 1;
  printf("---------------------\n");
  for(int i=1; i<=5; i++) {
    if(base == 36) {
      base = 1;
      printf("\n");
    }
    for(int j=3; j<=11; j+=2) {
      printf("%d-%d ", i, base);
      base += j;
    }
  }
  printf("\n---------------------");

  printf("\n\n");
  system("pause");
}