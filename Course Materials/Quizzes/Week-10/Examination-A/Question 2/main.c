#include <stdio.h>
#include <stdlib.h>

int main() {
  int a = 0, b = 0, c = 0, d = 0, e = 0;

  printf("Please input 5 values: ");
  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

  int min = a, max = a;

  if(min > b) min = b;
  if(min > c) min = c;
  if(min > d) min = d;
  if(min > e) min = e;

  if(max < b) max = b;
  if(max < c) max = c;
  if(max < d) max = d;
  if(max < e) max = e;

  printf("Min value: %d\n", min);
  printf("Max value: %d", max);

  return 0;
}