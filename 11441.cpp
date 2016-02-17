#include <stdio.h>

int main(void) {
	int nArr[100001] = {0, };
	int num;
	int N, M, n, m;
	int S, E, k;
	
	scanf("%d", &N);
	
	for(n = 1; n <= N; n++) {
		scanf("%d", &num);
		nArr[n] = nArr[n - 1] + num;
	}
	
	scanf("%d", &M);
	
	for(m = 0; m < M; m++) {
		scanf("%d %d", &S, &E);
		printf("%d\n", nArr[E] - nArr[S - 1]);
	}
	return 0;
}

