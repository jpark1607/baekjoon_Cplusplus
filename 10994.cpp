#include <stdio.h>

int main(void) {
	char cArr[500][500] = {{' ', }, };
	int N, i, K;
	int X, Y, j;
	scanf("%d", &N);
	X = N * 4 - 3;
	K = X;
	Y = 0;
	for(i = 0; i < K; i++) {
		for(j = 0; j < K; j++) {
			cArr[i][j] = ' ';
		}
	}
	for(i = 0; i < N; i++) {
		for(j = Y; j < X; j++) {
			cArr[Y][j] = '*';
			cArr[j][Y] = '*';
			cArr[X - 1][j] = '*';
			cArr[j][X - 1] = '*';
		}
		Y += 2;
		X -= 2;
	}
	for(i = 0; i < K; i++) {
		for(j = 0; j < K; j++) {
			printf("%c", cArr[i][j]);
		}
		if(i == K - 1)
			return 0;
		printf("\n");
	}
	return 0;
}


