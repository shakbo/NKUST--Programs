#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <direct.h>

#define BUF_SIZE 512

int main(int argc, char** argv)
{ 
  FILE *fp;
  
  char buffer[BUF_SIZE];
  char *p;
  p = getcwd( buffer, BUF_SIZE );

  if (strcmp(argv[1], "batteryreport") == 0){
    system("powercfg /batteryreport");
    system("cls");
    printf("%s>\n", p);
    printf("Creating batteryreport...\n");
    printf("Batteryreport was created!\n");
  }
  else if (strcmp(argv[1], "openreport") == 0) {
    printf("Opening report...\n");
    system("battery-report.html");
    return 0;
  } 
  else if (strcmp(argv[1], "deletereport") == 0) {
    printf("Deleting report...\n");
    fp=fopen("battery-report.html", "r");
    if(!(fp)) {
      perror("fopen");
      fclose(fp);
    } 
    else if (fp) {
      fclose(fp);
      system("del /f battery-report.html");
      printf("Okay deleted!\n");  
    }
  } 
  else if (strcmp(argv[1], "openreportdir") == 0) {
    ShellExecute(NULL, "open", ".\\", NULL, NULL, SW_SHOWNORMAL); 
  } 
  else if ((strcmp(argv[1], "--help") == 0) || (strcmp(argv[1], "-help") == 0) || (strcmp(argv[1], "help") == 0)) {
    printf(" batteryreport # Create battery report.\n");
    printf(" openreport # Open battery report.\n");
    printf(" deletereport # Delete battery report.\n");
    printf(" openreportdir # Open battery report directory.\n\n");
  }else {
    printf("No commands match!\n");
  }

  return 0;
}