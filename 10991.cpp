#include <stdio.h>

int main(void) {
	int N;
	int i, j;
	
	scanf("%d", &N);
	for(i = 1; i <= N; i++) {
		for(j = N; j > i; j--) {
			printf(" ");
		}
		for(j = 0; j < i; j++) {
			printf("* ");
		}
		printf("\n");
	}
	
	return 0;
}
