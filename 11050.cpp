#include <stdio.h>

int main(void) {
	int N, K;
	int C = 1;
	int i;
	
	scanf("%d %d", &N, &K);
	
	for(i = 1; i <= K; i++) {
		C *= N;
		C /= i;
		N -= 1;
	}
	
	printf("%d", C);
	return 0;
}
