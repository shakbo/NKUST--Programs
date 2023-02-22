#include <stdio.h>
#include <stdlib.h>

int listLeapYears(int yearStart, int yearStop) {
  int counter = 0;
  int actualStart = yearStart + 1;
  for(int i=actualStart; i<yearStop; i++) {
    if((i % 400 == 0) || ((i % 4 == 0) && (i % 100 != 0))) {
      printf("%d\n", i);
      counter++;
    }
  }
  return counter;
}

int main() {
  int yearStart, yearStop, count;

  printf("請輸入起始年: ");
  scanf("%d", &yearStart);

  printf("請輸入結束年: ");
  scanf("%d", &yearStop);

  count = listLeapYears(yearStart, yearStop);

  printf("共有 %d 個\n", count);
  
  system("pause");
}