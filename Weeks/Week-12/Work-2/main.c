#include <stdio.h>
#include <stdlib.h>

int main() {
	int N = 0;
	printf("等比級數和(2次方)\n");
	printf("N = ");
	scanf("%d", &N);
	int sum = (N * (N + 1) * (2 * N + 1)) / 6;
	printf("sum = %d", sum);
}