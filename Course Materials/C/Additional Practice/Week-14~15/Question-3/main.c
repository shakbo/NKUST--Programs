#include <stdio.h>
#include <stdlib.h>

int convert_to_seconds(int year) {
  return year*60*60*24*365;
}

int main() {
  int age, age_in_years;

  printf("Please input your ages: ");
  scanf("%d", &age);

  age_in_years = convert_to_seconds(age);
  printf("%d seconds passed in your life.", age_in_years);

  return 0;
}