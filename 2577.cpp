#include <stdio.h>

int main(void) {
	int A, B, C;
	int mul;
	int nArr[10];
	int i;
	
	scanf("%d %d %d", &A, &B, &C);
	mul = A * B * C;
	
	for(i = 0; i < 10; i++) {
		nArr[i] = 0;
	}
	
	while(mul != 0) {
		nArr[mul % 10] += 1;
		mul /= 10;
	}
	
	for(i = 0; i < 10; i++) {
		printf("%d\n", nArr[i]);
	}
	
	return 0;
}
