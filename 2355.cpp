#include <stdio.h>

int main(void) {
	long long i, j;
	long long iSum, jSum;
	
	scanf("%lld %lld", &i, &j);
	
	if(i > j) {
		int temp = i;
		i = j;
		j = temp;
	}
	jSum = j * (j + 1) / 2;
	
	iSum = (i - 1) * i / 2;
	
	printf("%d", jSum - iSum);
	
	return 0;
}
