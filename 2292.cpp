#include <stdio.h>

int main(void) {
	int N;
	int nCount;
	int six = 6;
	
	scanf("%d", &N);
	
	N -= 1;
	nCount = 1;
	
	while(N > 0) {
		N -= six;
		six += 6;
		nCount += 1;
	}
	
	printf("%d", nCount);
	
	return 0;
}
