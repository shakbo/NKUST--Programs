#include <stdio.h>
#include <stdlib.h>

int countHowMany8sV1(const int numberToCount) {
  int counter=0, buffer_number=numberToCount;
  while (buffer_number>0) {
    int digit = buffer_number % 10;
    if(digit == 8) counter++;
    buffer_number /= 10;
  }
  return counter;
}

void countHowMany8sV2(int number) {
  int counter=0;
  char *str;
  int str_size;

  if (number < 0) {
    printf("錯誤: 請輸入正整數!");
    return;
  }

  str_size = snprintf(NULL, 0, "%d", number);
  str = malloc(str_size + 1);
  sprintf(str, "%d", number);

  for(int i=0; str[i]!='\0'; i++) {
    if(str[i]=='8') {
      counter++;
    }
  }

  printf("%d 出現了 %d 次 8", number, counter);

  free(str);
}

void main() {
  int number;
  printf("請輸入數字: ");
  scanf("%d", &number);

  int answer = countHowMany8sV1(number);
  printf("%d 有 %d 個8", number, answer);
}