#include <stdio.h>

int main(void) {
	int n, A;
	
	scanf("%d", &n);
	scanf("%d", &A);
	while(A != 0) {
		if(A % n == 0)
			printf("%d is a multiple of %d.\n", A, n);
		else
			printf("%d is NOT a multiple of %d.\n", A, n);
		
		scanf("%d", &A);
	}
	return 0;
}
