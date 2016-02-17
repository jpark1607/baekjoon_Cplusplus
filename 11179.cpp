#include <stdio.h>

int main(void) {
	int N, i, j;
	int len;
	int nArr[40] = {0, };
	int bi = 1;
	
	scanf("%d", &N);
	i = 0;
	
	while(N >= 1) {
		nArr[i] = N % 2;
		N /= 2;
		i += 1;
	}
	
	for(j = 0; j < i; j++) {
		N = N * 2 + nArr[j];
	}
	
	printf("%d", N);
	return 0;
}
