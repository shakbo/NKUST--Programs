#include <stdio.h>
#include <stdlib.h>

void subFunction(double length) {
  int counter=0;
  do {
    length /= 2;
    counter++;
  } while (length > 1);
  printf("%3d 天後會小於 1 公尺", counter);
}

// void subFunction(double length) {
//   int counter=0;
//   while (length > 1) {
//     length /= 2;
//     counter++;
//   }
//   printf("%3d 天後會小於 1 公尺", counter);
// }

void main() {
  double original_length;

  printf("請輸入布的長度(公尺): ");
  scanf("%lf", &original_length);

  subFunction(original_length);
}