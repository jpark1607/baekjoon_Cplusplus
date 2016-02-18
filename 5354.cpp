#include <stdio.h>

int main(void) {
	char S[10][10];
	int T, t;
	int i, j;
	int N;
	
	scanf("%d", &T);
	for(t = 0; t < T; t++) {
		for(i = 0; i < 10; i++) {
			for(j = 0; j < 10; j++)
				S[i][j] = 'J';
		}
		scanf("%d", &N);
		
		for(i = 0; i < N; i++) {
			S[0][i] = '#';
			S[i][0] = '#';
			S[N - 1][i] = '#';
			S[i][N - 1] = '#';
		}
		
		for(i = 0; i < N; i++) {
			for(j = 0; j < N; j++)
				printf("%c", S[i][j]);
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}

