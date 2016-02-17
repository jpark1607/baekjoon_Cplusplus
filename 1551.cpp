#include <stdio.h>

int main(void) {
	int N, K;
	int nArr[20];
	int i, j;
	char c;
	scanf("%d %d", &N, &K);
	for(i = 0; i < N - 1; i++) {
		scanf("%d", &nArr[i]);
		scanf(",", &c);
	}
	scanf("%d", &nArr[N - 1]);
	
	for(i = 0; i < K; i++) {
		for(j = 0; j < N - 1; j++) {
			nArr[j] = nArr[j + 1] - nArr[j];
		}
		N -= 1;
	}
	
	for(i = 0; i < N - 1; i++) {
		printf("%d,", nArr[i]);
	}
	printf("%d", nArr[N - 1]);
	
	return 0;
}
