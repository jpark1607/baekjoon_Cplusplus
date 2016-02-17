#include <stdio.h>

int main(void) {
	int chess[3][6] = {0, };
	int i;
	
	chess[0][0] = 1; chess[0][1] = 1; chess[0][2] = 2;
	chess[0][3] = 2; chess[0][4] = 2; chess[0][5] = 8;
	
	for(i = 0; i < 6; i++) {
		scanf("%d", &chess[1][i]);
	}
	
	for(i = 0; i < 6; i++) {
		chess[2][i] = chess[0][i] - chess[1][i];
	}
	
	for(i = 0; i < 6; i++) {
		printf("%d ", chess[2][i]);
	}
	
	return 0;
}
