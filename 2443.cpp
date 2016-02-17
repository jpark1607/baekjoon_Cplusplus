#include <stdio.h>

int main(void) {
	int N;
	int nStar, nBlank;
	int i, j;
	
	scanf("%d", &N);
	
	nBlank = N - 1;
	
	for(i = N - 1; i >= 0; i--) {
		for(j = nBlank; j > i; j--) {
			printf(" ");
		}
		nStar = i * 2 + 1;
		for(j = 0; j < nStar; j++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
