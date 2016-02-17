#include <stdio.h>

int main(void) {
	
	int N;
	int i, j, k;
	
	scanf("%d", &N);
	for(i = 1; i <= N; i++) {
		for(j = N; j >= i; j--) {
			printf("*");
		}
		
		printf("\n");
	}
	
	
	return 0;
	
}
