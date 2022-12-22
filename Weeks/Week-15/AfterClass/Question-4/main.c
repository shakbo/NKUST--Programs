#include <stdio.h>
#include <stdlib.h>

int calculateArea(const int height,const int width) {
  return height*width;
}

int main() {
  int height, width;

  printf("長= ");
  scanf("%d", &height);

  printf("寬= ");
  scanf("%d", &width);

  printf("面積為: %d", calculateArea(height, width));
}