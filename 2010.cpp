#include <stdio.h>

int main(void) {
	int N;
	int nCount = 1;
	int nCur = 0;
	int i = 0;
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		scanf("%d", &nCur);
		nCount += nCur;
	}
	nCount -= N;
	
	printf("%d", nCount);
	
	return 0;
}

