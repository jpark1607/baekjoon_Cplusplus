#include <stdio.h>

void swap(int *n1, int *n2) {
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int min(int n1, int n2) {
	if(n1 < n2)
		return n1;
	else
		return n2;
}

int main(void) {
	int N, M, K;
	int P[1001] = {0, };
	int i, j;
	int eggMax = 0, idxMax = 0;
	
	scanf("%d %d", &N, &M);
	
	for(i = 1; i <= M; i++) {
		scanf("%d", &P[i]);
	}
	
	for(i = 1; i <= M - 1; i++) {
		for(j = 2; j <= M; j++) {
			if(P[j - 1] < P[j])
				swap(&P[j - 1], &P[j]);
		}
	}
	
	K = min(N, M);
	for(i = 1; i <= K; i++) {
		if(P[i] * i > eggMax * idxMax) {
			eggMax = P[i];
			idxMax = i;
		}
	}
	
	printf("%d %d", P[idxMax], eggMax * idxMax);
	return 0;
}

