#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int oddsum(int x) {
    if(x % 2 == 0) 
        return oddsum(x - 1); 
        
    return pow((x + 1) / 2, 2); 
    //pow((x + 1) / 2, 2) =  ((x + 1) / 2) * ((x + 1) / 2)
}

int main() {
	int N = 0;
	printf("等差數列求和\n");
	printf("N = ");
	scanf("%d", &N);
	int sum = oddsum(N);
	printf("sum = %d", sum);
}