#include <stdio.h>
#include <stdlib.h>

int main() {
  printf("  N       N^2       N^3\n");
  printf("-----------------------\n");
  for(int N=0; N<=50; N+=5) {
    printf("%3d", N);
    printf("%10d", N*N);
    printf("%10d", N*N*N);
    printf("\n");
  }

  return 0;
}