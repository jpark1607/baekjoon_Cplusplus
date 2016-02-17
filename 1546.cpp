#include <stdio.h>

int main(void) {
	int M = 0, N = 0;
	int i;
	int score = 0;
	int tot = 0;
	double ave = 0;
	
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		scanf("%d", &score);
		if(score > M) {
			M = score;
		}
		tot += score;
	}
	ave = ((double)tot / (double) N) * (100.0 / (double)M);
	printf("%.2f", ave);
	return 0;
}

