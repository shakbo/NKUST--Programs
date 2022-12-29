#include <stdio.h>
#include <stdlib.h>

void countHowMany8(int number) {
  int counter=0;
  char str[5];

  sprintf(str, "%d", number);

  for(int i=0; str[i]!='\0'; i++) {
    if(str[i]=='8') {
      counter++;
    }
  }

  printf("%d 出現了 %d 次 8", number, counter);
}

void main() {
  int number;

  printf("請輸入整數: ");
  scanf("%d", &number);

  countHowMany8(number);
}