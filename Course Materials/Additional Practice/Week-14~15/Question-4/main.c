#include <stdio.h>
#include <stdlib.h>

int calculate_square_area(int length, int width) {
  return length*width;
}

int main() {
  int length, width;
  printf("This program will calculate area of a square\n");

  printf("Please input length: ");
  scanf("%d", &length);

  printf("Please input width: ");
  scanf("%d", &width);

  int result = calculate_square_area(length, width);
  printf("Area= %d", result);

  return 0;
}