#include <stdio.h>

int main(void) {
	int A, B;
	
	while(1) {
		scanf("%d", &A);
		scanf("%d", &B);
		if(A == 0 && B == 0)
			return 0;
		printf("%d\n", A + B);
	}
	
	return 0;
}
