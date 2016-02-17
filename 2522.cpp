#include <stdio.h>

int main(void) {
	int N;
	int i, j;
	scanf("%d", &N);
	
	for(i = 0; i < N; i++) {
		for(j = N - 1; j > i; j--) {
			printf(" ");
		}
		for(j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}
	
	for(i = N - 1; i > 0; i--) {
		for(j = N; j > i; j--) {
			printf(" ");
		}
		for(j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
