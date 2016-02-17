#include <stdio.h>

int change(int *A, int *B, int K) {
	if(K == 0)
		return 0;
	else {
		int temp = *A;
		*A = *B;
		*B += temp;
		return change(A, B, K - 1);
	}
}


int main(void) {
	int K;
	int A = 1, B = 0;
	scanf("%d", &K);	
	change(&A, &B, K);
	printf("%d %d", A, B);
	return 0;
}


