#include <stdio.h>
#include <stdlib.h>

int main() {
  for(int chickens=1; chickens<=40; chickens++) {
    for(int rabbits=20; rabbits>=1; rabbits--) {
      if((chickens*2 + rabbits*4)==80) {
        printf("%d 隻雞 %d 隻兔子\n", chickens, rabbits);
      }
    }
  }

  printf("\n\n");
  system("pause");
}