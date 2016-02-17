#include <stdio.h>

int main(void) {
	int K, N, M;
	int A;
	
	scanf("%d %d %d", &K, &N, &M);
	A = K * N;
	
	if(A > M)
		printf("%d", A - M);
	else
		printf("%d", 0);
	return 0;
}

