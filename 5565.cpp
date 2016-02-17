#include <stdio.h>

int main(void) {
	int N, A;
	int i;
	
	scanf("%d", &N);
	for(i = 0; i < 9; i++) {
		scanf("%d", &A);
		N -= A;
	}
	
	printf("%d", N);
	return 0;
}
