#include <stdio.h>

int main(void) {
	char chess[8][8];
	int i, j;
	int count = 0;
	
	for(i = 0; i < 8; i++) {
		for(j = 0; j < 8; j++) {
			chess[i][j] = ' ';
		}
	}
	
	for(i = 0; i < 8; i++) {
		scanf("%s", chess[i]);
	}

	
	for(i = 0; i < 8; i++) {
		if(i % 2 == 0) {
			for(j = 0; j < 8; j += 2) {
				if(chess[i][j] == 'F') {
					count += 1;
				}
			}
		}
		else {
			for(j = 1; j < 8; j += 2) {
				if(chess[i][j] == 'F') {
					count += 1;
				}
			}
		}
	}
	
	printf("%d", count);
	return 0;
}
