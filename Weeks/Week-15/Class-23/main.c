/*
  請設計一C程式，可輸入A和B(A<B)，
  列出A到B中，不可被3、4或5其中之一整除者。
  (限用函數)
*/
#include <stdio.h>
#include <stdlib.h>

void function(int A, int B) {
  for(int i=A; i<=B; i++) {
    if(((i%3!=0)&&(i%4!=0)&&(i%5!=0))) {
      printf("i=%3d\n", i);
    }
  }
}

int main() {
  function(10, 36);
  return 0;
}