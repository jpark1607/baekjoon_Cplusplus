#include <stdio.h>

int main(void) {
	int nArr[101] = {0, };
	int N, M, n, m;
	int temp;
	int S, E;
	int Q, i;
	int t;
	
	scanf("%d %d", &N, &M);
	for(n = 1; n <= N; n++)
		nArr[n] = n;
		
	for(m = 0; m < M; m++) {
		scanf("%d %d", &S, &E);
		Q = E - S + 1;
		Q /= 2;
		for(i = 0; i < Q; i++) {
			temp = nArr[S + i];
			nArr[S + i] = nArr[E - i];
			nArr[E - i] = temp;
		}
	}
	
	for(n = 1; n <= N; n++)
		printf("%d ", nArr[n]);

	return 0;
}
