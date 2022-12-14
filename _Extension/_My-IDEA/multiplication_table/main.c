#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  printf(" ");
  for(int k=1; k<=9; k++) {
    printf("%4d", k);
  }
  printf("\n");
  
  for(int i=1;i<=9;i++) {
    printf("%d",i);
    for(int j=1;j<=9;j++) {
      printf("%4d", i * j);
    }
    printf("\n");
  }

  return 0;
}