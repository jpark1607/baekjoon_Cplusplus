#include <stdio.h>

int main(void) {
	int N, i;
	int K;
	int M[10] = {0, };
	int nCount = 0;
	
	scanf("%d %d", &N, &K);
	
	for(i = 0; i < N; i++) {
		scanf("%d", &M[i]);
	}
	
	for(i = N - 1; i >= 0; i--) {
		nCount += K / M[i];
		K %= M[i];
	}
	
	printf("%d", nCount);
	return 0;
}
