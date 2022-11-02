#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, i;
	
	printf("--------------------\n");
	printf("while: \n");
	
	n=0, i=1;
	while(i<=10) {
		n=n+i;
		printf("n: %d i: %d\n", n, i);
		i++;
	}
	
	printf("--------------------\n");
	printf("for: \n");
	
	n=0;
	for(i=1; i<=10; i++) {
		n=n+i;
		printf("n: %d i: %d\n", n, i);
	}

  printf("\n\n");
  system("pause");
}