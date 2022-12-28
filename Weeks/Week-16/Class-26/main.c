/*
  若甲、乙、丙三個城市分別有人口25000人、28000人、30000人，
  其中甲城市人口以每年3%的比例遞增，乙城市人口以每年2%的比例遞增，丙城市人口以每年2.5%的比例遞增，
  請設計一個C程式，列出未來20年每一年城市人口的排名變化(如甲>乙>丙、或乙>丙>甲、或丙>甲>乙等)。
*/
#include <stdio.h>
#include <stdlib.h>

void listRanking(int howManyYears, int city_1, int city_2, int city_3) {
  for(int i=1; i<=howManyYears; i++) {
    city_1 *= 1.03;
    city_2 *= 1.02;
    city_3 *= 1.025;
    
    if((city_1 > city_2)&&(city_2 > city_3)) {
      printf("甲 > 乙 > 丙");
    }
    else if((city_1 > city_3)&&(city_3 > city_2)) {
      printf("甲 > 丙 > 乙");
    }

    else if((city_2 > city_1)&&(city_1 > city_3)) {
      printf("乙 > 甲 > 丙 ");
    }
    else if((city_2 > city_3)&&(city_3 > city_1)) {
      printf("乙 > 丙 > 甲");
    }

    else if((city_3 > city_1)&&(city_1 > city_2)) {
      printf("丙 > 甲 > 乙");
    }
    else if((city_3 > city_2)&&(city_2 > city_1)) {
      printf("丙 > 乙 > 甲");
    }
    printf("\n");
  }
}

int main() {
  int howManyYears=20;
  int city_1=25000, city_2=28000, city_3=30000;

  listRanking(howManyYears, city_1, city_2, city_3);

  return 0;
}
