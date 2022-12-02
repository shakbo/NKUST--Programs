#include <stdio.h>
#include <stdlib.h>

int main() {
  for(int x=1; x<=40; x++) {
    for(int y=20; y>=1; y--) {
      if((x*2 + y*4)==80) {
        printf("%d 隻雞 %d 隻兔子\n", x, y);
      }
    }
  }

  printf("\n\n");
  system("pause");
}