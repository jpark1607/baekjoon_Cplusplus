#include <stdio.h>

int main(void) {
	int A[3], B[2];
	int i;
	int max1 = 2100;
	int max2 = 2100;
	
	for(i = 0; i < 3; i++) {
		scanf("%d", &A[i]);
		if(A[i] < max1)
			max1 = A[i];
	}
	
	for(i = 0; i < 2; i++) {
		scanf("%d", &B[i]);
		if(B[i] < max2)
			max2 = B[i];
	}
	
	printf("%d", max1 + max2 - 50);
	
	return 0;
}
