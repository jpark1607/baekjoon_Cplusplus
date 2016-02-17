#include <stdio.h>

int main(void) {
	int nArr[100][100];
	int X;
	int N, M;
	int i, j;
	
	scanf("%d %d", &N, &M);
	for(i = 0; i < N; i++) {
		for(j = 0; j < M; j++) {
			scanf("%d", &nArr[i][j]);
		}
	}
	
	for(i = 0; i < N; i++) {
		for(j = 0; j < M; j++) {
			scanf("%d", &X);
			nArr[i][j] += X;
		}
	}
	
	for(i = 0; i < N; i++) {
		for(j = 0; j < M; j++) {
			printf("%d ", nArr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
