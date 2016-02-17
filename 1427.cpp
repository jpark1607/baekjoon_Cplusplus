#include <stdio.h>

int main(void) {
	int N;
	int nSort[10];
	int n = 0, i = 0, j = 0;
	int nMax, iMax;
	
	scanf("%d", &N);
	while(N > 0) {
		nSort[n] = N % 10;
		N /= 10;
		++n;
	}
	
	for(i = 0; i < n - 1; i++) {
		nMax = nSort[i];
		iMax = i;
		for(j = i + 1; j < n; j++) {
			if(nSort[j] > nMax) {
				nMax = nSort[j];
				iMax = j;
			}
		}
		nSort[iMax] = nSort[i];
		nSort[i] = nMax;
	}
	
	for(i = 0; i < n; i++) {
		printf("%d", nSort[i]);
	}
	return 0;
}
