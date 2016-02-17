#include <stdio.h>

int main(void) {
	int N, i;
	int P = 2;
	
	scanf("%d", &N);
	
	for(i = 0; i < N; i++) {
		P += P - 1;
	}
	
	printf("%d", P * P);
	return 0;
}
