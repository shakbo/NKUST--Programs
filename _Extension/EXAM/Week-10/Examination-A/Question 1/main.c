#include <stdio.h>
#include <stdlib.h>

int main() {
  int age = 0;

  printf("Please input your age: ");
  scanf("%d", &age);

  printf("You are %d years old.", age);

  return 0;
}