#include <stdio.h>

int main(void) {
	int N, i;
	int P[1000];
	int up = 0;
	int max = 0;
	int sPos = 0;
	
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		scanf("%d", &P[i]);
	}
	
	sPos = P[0];
	for(i = 1; i < N; i++) {
		if(P[i] > P[i - 1]) {
			up = P[i] - sPos;
			if(up > max) {
				max = up;
			}
		}
		else {
			sPos = P[i];
			up = 0;
		}
	}
	
	printf("%d", max);
	return 0;
}
