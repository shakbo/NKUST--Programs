#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int scanint(const char *const message)
{
    int value;

    printf("%s > ", message);
    while (scanf("%d", &value) != 1)
    {
        int chr;
        printf("\t無效數值! 請重新輸入 > \n");
        do {
            chr = getchar();
        } while ((chr != EOF) && (chr != '\n'));
        printf("%s > ", message);
    }
    return value;
}

void guess(int min, int max, int chances) {
  int sys_answer = 0, usr_answer = 0;
  int guessed = 0;

  srand(time(NULL));
  
  sys_answer = rand() % max;

  printf("猜一個介於 %d 和 %d 之間的數字\n", min, max);

  do
  {
    if (guessed > chances-1) {
      printf("You Loose!\n");
      break;
    }
    usr_answer = scanint("請輸入一個整數");
    int chance_left = chances - guessed;

    //scanf("%d", &guess);

    if (usr_answer > sys_answer) {
      max = usr_answer;
      printf("再低一點! (%d ~ %d)\n", min, max);
      printf("還剩下 %d 次機會!\n\n", chance_left);
      guessed++;
    } else if (usr_answer < sys_answer) {
      min = usr_answer;
      printf("再高一點! (%d ~ %d)\n", min, max);
      printf("還剩下 %d 次機會!\n\n", chance_left);
      guessed++;
    } else {
      printf("你在 %d 步之內猜到了!\n", guessed);
    }
  } while (guessed != sys_answer);  
}

int main()  {
  int min = 0, max = 100, chances=5;

  guess(min, max, chances);

  return 0;
}

