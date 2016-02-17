#include <stdio.h>

int main(void) {
	int A, B, C;
	int max;
	
	scanf("%d %d %d", &A, &B, &C);
	max = C - B;
	if(B - A > max) {
		max = B - A;
	}
	
	printf("%d", max - 1);
	
	return 0;
}
