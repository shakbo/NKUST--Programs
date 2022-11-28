#include <stdio.h>
#include <windows.h>

//You can get these code by using color /? in cmd.
#define color_black         0
#define color_blue          1
#define color_green         2
#define color_aqua          3
#define color_red           4
#define color_purple        5
#define color_yellow        6
#define color_white         7
#define color_gray          8
#define color_light_blue    9
#define color_light_green   10
#define color_light_aqua    11
#define color_light_red     12
#define color_light_purple  13
#define color_light_yellow  14
#define color_bright_white  15

void printer(char* string, int typedelay_ms)
{
  int counter = 0;
  while(string[counter] != '\0')
  {
    printf("%c", string[counter]);
    Sleep(typedelay_ms);
    counter++;
  }
}

int main()
{
  HANDLE hConsole;
  hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

  SetConsoleTextAttribute(hConsole, color_light_red);
  Sleep(500);
  printf("Darth Vader: ");
  Sleep(500);
  printer("Luke, ", 100);
  printer("I'm your father.\n", 75);

  SetConsoleTextAttribute(hConsole, color_light_aqua);
  Sleep(1000);
  printf("Luke Skywalker: ");
  Sleep(500);
  printer("Nooooooooooooooooooo!", 100);


  SetConsoleTextAttribute(hConsole, color_bright_white);
  Sleep(500);
  printf("\n\n");
  system("pause");
}