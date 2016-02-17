#include <stdio.h>

int main(void) {
	
	int N;
	int i, j, k;
	
	scanf("%d", &N);
	for(i = 1; i <= N; i++) {
		for(j = 1; j < i; j++) {
			printf(" ");
		}
		for(k = N; k >= i; k--) {
			printf("*");
		}	
		printf("\n");
	}
	return 0;
}
