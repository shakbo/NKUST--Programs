#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int year;

  for(year=1000; year<=3000; year++) {
    if((year%400==0) || ((year%4)==0 && (year%100)!=0)) printf("%d 是閏年\n", year);
  }

  printf("\n\n"); //換行。
  system("pause"); //暫停程式，防止視窗提前關閉。
}