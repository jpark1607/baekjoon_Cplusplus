#include <stdio.h>

int main(void) {
	int i, j;
	int nMax = 0, iMax = 0, jMax = 0;
	int nCur[10][10];
	
	for(i = 1; i < 10; i++) {
		for(j = 1; j < 10; j++) {
			scanf("%d", &nCur[i][j]);
			if(nCur[i][j] > nMax) {
				iMax = i;
				jMax = j;
				nMax = nCur[i][j];
			}
		}
	}
	
	printf("%d\n%d %d", nMax, iMax, jMax);
	return 0;
}
