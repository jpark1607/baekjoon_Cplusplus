#include <stdio.h>

int main(void) {
	int nArr[1001] = {0, };
	int N, M, i;
	int x, y;
	
	scanf("%d %d", &N, &M);
	for(i = 0; i < M; i++) {
		scanf("%d %d", &x, &y);
		nArr[x] += 1;
		nArr[y] += 1;
	}
	
	for(i = 1; i <= N; i++) {
		printf("%d\n", nArr[i]);
	}
	return 0;
}


