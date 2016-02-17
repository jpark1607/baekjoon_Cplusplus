#include <stdio.h>

int main(void) {
	int T, t;
	int N, n;
	
	scanf("%d", &T);
	for(t = 0; t < T; t++) {
		scanf("%d", &N);
		for(n = 0; N != 0; n++) {
			if(N % 2 == 1) {
				printf("%d ", n);
			}
			N /= 2;
		}
		printf("\n");
	}
	return 0;
}
