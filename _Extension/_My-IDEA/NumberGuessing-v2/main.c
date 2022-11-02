#include <stdio.h>
#include <stdlib.h>

void gameLoop(int range_min, int range_max, int chances) {
	int usr_num, sys_num=78;
	int hit = 0;
	
	while(chances>0) {
		printf("請輸入介於 %d ~ %d 之間的值(含) / 還有 %d 次機會 > ", range_min, range_max, chances);
		scanf("%d", &usr_num);
		chances--;
	
		if(usr_num < sys_num && usr_num > range_min) {
			if (chances > 0) printf("再高一點\n");
			range_min = usr_num;
		}	else if (usr_num > sys_num && usr_num < range_max) {
			if (chances > 0) printf("再低一點\n");
			range_max = usr_num;
		}	else if (usr_num == sys_num)	{
			printf("恭喜你猜中了!\n");
			hit = 1;
			chances = 0;
		}	else {
			printf("超出範圍\n");
			chances++;
		}
	}
	
	if(chances==0 && hit == 0) {
		printf("\n太可惜了! 居然沒猜到。答案是 %d", sys_num);
	}
}

int main() {
	int min=0, max=100, chances=5;
	gameLoop(min, max, chances);
}
