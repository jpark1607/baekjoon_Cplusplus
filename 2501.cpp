#include <stdio.h>

int main(void) {
	int N, K;
	int i;
	int count = 0;
	
	scanf("%d %d", &N, &K);
	for(i = 1; i <= N; i++) {
		if(N % i == 0) {
			count += 1;
		}
		if(count == K) {
			printf("%d", i);
			return 0;
		}
	}
	
	printf("0");
	return 0;
}
