#include <stdio.h>

int main(void) {
	int T, t;
	int M, N, m, n;
	int nArr[100][100] = {0, };
	int k, count, sum;
	
	scanf("%d", &T);
	for(t = 0; t < T; t++) {
		scanf("%d %d", &M, &N);
		
		for(m = 0; m < M; m++) {
			for(n = 0; n < N; n++)
				scanf("%d", &nArr[m][n]);
		}
		
		sum = 0;
		for(m = 0; m < M - 1; m++) {
			for(n = 0; n < N; n++) {
				count = 0;
				if(nArr[m][n] == 1) {
					for(k = m + 1; k < M; k++) {
						if(nArr[k][n] == 0)
							count += 1;
					}
					sum += count;
				}
			}
		}
				
		printf("%d\n", sum);
	}
	return 0;
}

