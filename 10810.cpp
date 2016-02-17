#include <stdio.h>

int main(void) {
	int nArr[101] = {0, };
	int N, M, n, m;
	int i, j, k;
	int x;
	
	scanf("%d %d", &N, &M);
	for(m = 0; m < M; m++) {
		scanf("%d %d %d", &i, &j, &k);
		for(x = i; x <= j; x++)
			nArr[x] = k;
	}
	
	for(n = 1; n <= N; n++)
		printf("%d ", nArr[n]);
	return 0;
}
