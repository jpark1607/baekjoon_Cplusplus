#include <stdio.h>
#include <string.h>

int main(void) {
	int nArr[200][4] = {{0, }, };
	int N, i, j;
	int comp[3][101] = {{0, }, };
	
	scanf("%d", &N);
	
	for(i = 0; i < N; i++) {
		for(j = 0; j < 3; j++) {
			scanf("%d", &nArr[i][j]);
			comp[j][nArr[i][j]] += 1;
		}
	}
	for(j = 0; j < 3; j++) {
		for(i = 0; i < N; i++) {
			if(comp[j][nArr[i][j]] > 1)
				nArr[i][j] = 0;
			else
				nArr[i][3] += nArr[i][j];
		}
	}
	
	for(i = 0; i < N; i++) {
		printf("%d\n", nArr[i][3]);
	}
	return 0;
}
