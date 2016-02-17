#include <stdio.h>

void swap(int *n1, int *n2) {
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int main(void) {
	int A[3];
	int i, j;
	
	scanf("%d %d %d", &A[0], &A[1], &A[2]);
	
	for(i = 0; i < 2; i++) {
		for(j = 1; j < 3; j++) {
			if(A[j - 1] > A[j])
				swap(&A[j - 1], &A[j]);
		}
	}
	
	printf("%d %d %d", A[0], A[1], A[2]);
	
	return 0;
}

