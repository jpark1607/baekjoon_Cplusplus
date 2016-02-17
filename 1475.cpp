#include <stdio.h>

int main(void) {
	int N, i;
	int nArr[10];
	int nMax = 0;
	
	for(i = 0; i < 10; i++) {
		nArr[i] = 0;
	}
	scanf("%d", &N);
	
	while(N > 0) {
		nArr[N % 10] += 1;
		N /= 10;
	}
	nArr[6] += nArr[9];
	nArr[6] = (nArr[6] + 1) / 2;
	
	for(i = 0; i < 9; i++) {
		if(nArr[i] > nMax) {
			nMax = nArr[i];
		}
	}
	
	printf("%d", nMax);
	
	return 0;
}
