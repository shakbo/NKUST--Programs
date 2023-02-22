#include <stdio.h>
#include <stdlib.h>

int main() {
	int N = 0;
	printf("等差數列和\n");
	printf("N = ");
	scanf("%d", &N);
	int sum = (1 + N) * N /2;
	printf("sum = %d", sum);
}