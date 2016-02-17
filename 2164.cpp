#include <stdio.h>

int main(void) {
	int card[500001] = {0, };
	int N, i;
	
	scanf("%d", &N);
	for(i = 1; i <= N; i++) {
		card[i] = i;
	}

	for(i = 1; i <= N / 2; i++) {
		card[i] = card[i * 2];
	}
	
	if(N % 2 == 1) {
		for(i = N / 2 + 1; i > 0; i--) {
			card[i + 1] = card[i];
		}
		card[1] = card[N];
		N = N / 2 + 1;
	}
	else {
		N = N / 2;
	}
	
	for(i = 1; i < N; i++) {
		card[i + N] = card[i * 2];
	}
	printf("%d", card[N * 2 - 1]);
	return 0;
}
