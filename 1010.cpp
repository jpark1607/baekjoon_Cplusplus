#include <stdio.h>
int comb(int N, int M) {
	int i, j;
	int res = 1;
	for(i = M, j = 1; j <= N; i--, j++) {
		res *= i;
		res /= j;
	}
	return res;
}

int main(void) {
	int T, i;
	int N, M;
	
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d %d", &N, &M);
		printf("%d\n", comb(N, M));
	}
	return 0;
}
