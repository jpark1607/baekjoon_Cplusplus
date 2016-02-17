#include <stdio.h>
void swap(int *n1, int *n2) {
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int main(void) {
	int N, i, j;
	int A[50], B[50];
	int sum = 0;
	
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	for(i = 0; i < N; i++) {
		scanf("%d", &B[i]);
	}
	
	for(i = 0; i < N - 1; i++) {
		for(j = 1; j < N; j++) {
			if(A[j - 1] > A[j])
				swap(&A[j - 1], &A[j]);
		}
		for(j = 1; j < N; j++) {
			if(B[j - 1] < B[j])
				swap(&B[j - 1], &B[j]);
		}
	}
	
	for(i = 0; i < N; i++) {
		sum += A[i] * B[i];
	}
	
	printf("%d", sum);
	return 0;
}
