#include <stdio.h>

int main(void) {
	int cook[5][5];
	int i, j;
	int maxP = 0, maxI = 0;
	
	for(i = 0; i < 5; i++) {
		cook[i][4] = 0;
		for(j = 0; j < 4; j++) {
			scanf("%d", &cook[i][j]);
			cook[i][4] += cook[i][j];
		}
	}
	
	for(i = 0; i < 5; i++) {
		if(cook[i][4] > maxP) {
			maxP = cook[i][4];
			maxI = i;
		}
	}
	
	printf("%d %d", maxI + 1, maxP);
	return 0;
}

