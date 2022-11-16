#include <stdio.h>
#include <stdlib.h>

int main() {
  double s = 0.0, total = 20000.0;

  printf("Please input the rate s: ");
  scanf("%lf", &s);

  for(int i=0; i<20; i++) {
    total += total*s;
    printf("The money after %d year(s): %.2lf\n", i+1, total);
  }

  return 0;
}