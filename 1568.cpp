#include <stdio.h>


int main(void) {
	int N;
	int nData;
	int nCount;
	scanf("%d", &N);
	
	nData = 1;
	nCount = 0;
	
	while(N != 0) {
		N -= nData;
		nData += 1;
		if(N < nData) {
			nData = 1;
		}
		nCount += 1;
	}
	
	printf("%d", nCount);
	return 0;
}

