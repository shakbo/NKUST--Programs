#include <stdio.h>
#include <stdlib.h>

int main() {
  int x=160, y=12;

  int Box = x/y;
  int LeftEggs = x%y;

  printf("共有%d盒蛋。\n剩下%d個蛋。\n", Box, LeftEggs);

  system("pause");
}