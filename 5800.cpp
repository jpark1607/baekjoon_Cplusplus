#include <stdio.h>

void swap(int *n1, int *n2) {
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int main(void) {
	int K, i;
	int N, j, k;
	int M[50];
	int dist;
	scanf("%d", &K);
	
	for(i = 1; i <= K; i++) {
		scanf("%d", &N);
		for(j = 0; j < N; j++) {
			scanf("%d", &M[j]);
		}
		
		for(j = 0; j < N - 1; j++) {
			for(k = 1; k < N; k++) {
				if(M[k - 1] > M[k])
					swap(&M[k - 1], &M[k]);
			}
		}
		
		dist = 0;
		for(j = 0; j < N - 1; j++) {
			if(M[j + 1] - M[j] > dist)
				dist = M[j + 1] - M[j];
		}
		
		printf("Class %d\n", i);
		printf("Max %d, Min %d, Largest gap %d\n", M[N - 1], M[0], dist);
	}
	
	return 0;
}
