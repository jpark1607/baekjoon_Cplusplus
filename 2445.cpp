#include <stdio.h>

int main(void) {
	int N;
	int nPos, nStar;
	int i, j;
	char starArr[200][200];
	
	scanf("%d", &N);
	for(i = 0; i < 2 * N; i++) {
		for(j = 0; j < 2 * N; j++) {
			starArr[i][j] = ' ';
		}
	}
	nPos = 0;
	nStar = 2 * N - 1;
	for(i = 0; i < N; i++) {
		for(j = 0; j < nPos; j++);
		for(j = nPos; j < nStar; j++) {
			starArr[i][j] = '*';
		}
		nPos += 1;
		nStar -= 1;
	}
	nPos -= 1;
	nStar += 1;
	
	for(i = N; i < 2 * N; i++) {
		for(j = 0; j < nPos; j++);
		for(j = nPos; j < nStar; j++) {
			starArr[i][j] = '*';
		}
		nPos -= 1;
		nStar += 1;
	}
	
	for(i = 0; i < 2 * N - 1; i++) {
		for(j = 0; j < 2 * N; j++) {
			printf("%c", starArr[j][i]);
		}
		if(i == 2 * N - 2) {
			return 0;
		}
		printf("\n");
	}
	return 0;
}
