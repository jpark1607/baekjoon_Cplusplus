#include <stdio.h>

int main(void) {
	long long N;
	int nArr[100] = {0, };
	int i = 0, j = 0;
	
	scanf("%lld", &N);
	
	while(N != 0) {
		nArr[i] = (int)(N % 2);
		N /= 2;
		i += 1;
	}
	for(j = i - 1; j >= 0; j--)
		printf("%d", nArr[j]);

	return 0;
}
