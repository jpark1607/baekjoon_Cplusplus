#include <stdio.h>

int main(void) {
	int T, i;
	int A, B, C, D;
	
	scanf("%d", &T);
	
	for(i = 0; i < T; i++) {
		scanf("%d %d", &A, &B);
		C = B * 2 - A;
		D = B - C;
		printf("%d %d\n", C, D);
	}
	return 0;
}


