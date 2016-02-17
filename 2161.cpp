#include <stdio.h>

int main(void) {
	int card[2001] = {0, };
	int trash[2001] = {0, };
	int N;
	int i;
	
	scanf("%d", &N);
	
	for(i = 1; i <= N; i++) {
		card[i] = i;
	}
	
	for(i = 1; i < N; i++) {
		printf("%d ", card[i * 2 - 1]);
		
		card[i + N] = card[i * 2];
	}
	printf("%d", card[N * 2 - 1]);
	return 0;
}
