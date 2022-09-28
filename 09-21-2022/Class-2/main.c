#include <stdio.h>
#include <stdlib.h>

int main() {
  int a= 25, b= 8;

  int a_plus_b= a+b, a_minus_b= a-b, a_times_b= a*b, a_divide_b= a/b, a_mod_b= a%b;

  printf("1. a+b=%d\n 2. a-b=%d\n 3. a*b=%d\n 4. a/b=%d\n 5. a%b=%d\n", a_plus_b, a_minus_b, a_times_b, a_divide_b, a_mod_b);

  system("pause");
}