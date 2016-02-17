#include <stdio.h>

int main(void) {
	int N, M, K;
	int nData[301][301];
	int nCur = 0;
	int i, j, k;
	int st_r, st_c, en_r, en_c;
	int nSum = 0;
	scanf("%d %d", &N, &M);
	
	for(i = 1; i <= N; i++) {
		for(j = 1; j <= M; j++) {
			scanf("%d", &nData[i][j]);
		}
	}
	
	scanf("%d", &K);
	for(k = 0; k < K; k++) {
		nSum = 0;
		scanf("%d %d %d %d", &st_r, &st_c, &en_r, &en_c);
		for(i = st_r; i <= en_r; i++) {
			for(j = st_c; j <= en_c; j++) {
				nSum += nData[i][j];
			}
		}
		
		printf("%d\n", nSum);
	}
	
	return 0;
}
