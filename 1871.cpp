#include <stdio.h>


int main(void) {
	int N;
	char C[10];
	int i, j;
	int nSum = 0, cSum = 0;
	
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		scanf("%s", C);
		
		cSum = 0;
		for(j = 0; j < 3; j++) {
			cSum *= 26;
			cSum += C[j] - 65;
		}
		
		nSum = 0;
		for(j = 4; j < 8; j++) {
			nSum *= 10;
			nSum += C[j] - 48;
		}
		if((cSum - nSum) <= 100 && (cSum - nSum) >= -100) {
			printf("nice\n");
		}
		else {
			printf("not nice\n");
		}
	}
	
	return 0;
}


