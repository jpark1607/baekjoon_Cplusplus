#include <stdio.h>

int main(void) {
	int nArr[101] = {0, };
	int N, M, n, m;
	int temp;
	int S, E;
	
	scanf("%d %d", &N, &M);
	for(n = 1; n <= N; n++)
		nArr[n] = n;
		
	for(m = 0; m < M; m++) {
		scanf("%d %d", &S, &E);
		
		temp = nArr[S];
		nArr[S] = nArr[E];
		nArr[E] = temp;
	}
	
	for(n = 1; n <= N; n++)
		printf("%d ", nArr[n]);

	return 0;
}
