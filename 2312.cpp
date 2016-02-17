#include <stdio.h>

int main(void) {
	int nArr[350] = {0, };
	int T, i;
	int N, j, k;
	
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d", &N);
		for(j = 2; j <= N; j++) {
			k = 0;
			while(N % j == 0) {
				N /= j;
				k += 1;
			}
			if(k > 0)
				printf("%d %d\n", j, k);
		}
	}
	return 0;
}

