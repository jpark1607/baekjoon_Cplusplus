#include <stdio.h>

int main(void) {
	int A, sum = 0;
	int i;
	
	for(i = 0; i < 5; i++) {
		scanf("%d", &A);
		if(A < 40)
			A = 40;
		sum += A;
	}
	printf("%d", sum / 5);
	return 0;
}

