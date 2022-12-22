#include <stdio.h>
#include <stdlib.h>

int convertToSeconds(int years) {
  return years *= 31556926;
}

int main() {
  int ages, ages_in_seconds;

  printf("請輸入年齡: ");
  scanf("%d", &ages);
  
  ages_in_seconds = convertToSeconds(ages);
  printf("你的年齡換算為秒數為: %d", ages_in_seconds);

  return 0;
}