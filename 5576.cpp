#include <stdio.h>

void swap(int *n1, int *n2) {
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int main(void) {
	int W[10], K[10];
	int i, j;
	int sumW, sumK;
	
	for(i = 0; i < 10; i++) {
		scanf("%d", &W[i]);
	}
	for(i = 0; i < 10; i++) {
		scanf("%d", &K[i]);
	}
	
	for(i = 0; i < 9; i++) {
		for(j = 1; j < 10; j++) {
			if(W[j - 1] < W[j])
				swap(&W[j - 1], &W[j]);
			if(K[j - 1] < K[j])
				swap(&K[j - 1], &K[j]);
		}
	}
	
	sumW = W[0] + W[1] + W[2];
	sumK = K[0] + K[1] + K[2];
	
	printf("%d %d", sumW, sumK);
	
	return 0;
}
