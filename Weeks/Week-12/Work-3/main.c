#include <stdio.h>
#include <stdlib.h>

int main() {
	int N = 0;
	printf("等差數列和 + 等比數列和\n");
	printf("N = ");
	scanf("%d", &N);
	int sum_not_square = (1 + N) * N /2;
	int sum_square = (N * (N + 1) * (2 * N + 1)) / 6;
	int sum_total = sum_not_square + sum_square;
	printf("sum = %d", sum_total);
}