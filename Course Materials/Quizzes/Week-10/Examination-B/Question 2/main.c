#include <stdio.h>
#include <stdlib.h>

int main() {
  double nums[5] = {0.0, 0.0, 0.0, 0.0, 0.0};
  double temp=0;

  printf("Please input 5 values: ");
  scanf("%lf %lf %lf %lf %lf", &nums[0], &nums[1], &nums[2], &nums[3], &nums[4]);

  for(int i=0; i<5; i++) {
    for(int j=i+1; j<5; j++) {
      if(nums[i] < nums[j]) {
        temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
      }
    }
  }

  printf("Min value: %lf\n", nums[4]);
  printf("Max value: %lf", nums[0]);

  return 0;
}