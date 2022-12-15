#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int calculate_BMI(double height, double weight) {
  double height_meters = height/100;
  return weight/(pow(height_meters, 2));
}

int main() {
  int height, weight;
  
  printf("Please input your height(cm): ");
  scanf("%d", &height);

  printf("Please input your weight(kg): ");
  scanf("%d", &weight);

  double result = calculate_BMI(height, weight);
  if(result<18.5) printf("太輕了喔!!");
  else if((18.5<=result) && (result<24)) printf("標準喔!!");
  else printf("該減肥了喔!!");

  return 0;
}