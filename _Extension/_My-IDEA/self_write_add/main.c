#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
  int temp = a ^ b;
  a = ((unsigned int)(a&b) << 1);
  return a + temp;
}

int main() {
  int a, b;

  printf("a= ");
  scanf("%d", &a);

  printf("b= ");
  scanf("%d", &b);

  int sum= add(a, b);
  printf("%d", sum);

  printf("a^b= %d", a^b);
  
  printf("\n\n");
  system("pause");
}