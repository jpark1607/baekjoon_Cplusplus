#include <stdio.h>

int main(void) {
	int A[10], B[10];
	int ptA = 0, ptB = 0;
	int i;
	
	for(i = 0; i < 10; i++) {
		scanf("%d", &A[i]);
	}
	for(i = 0; i < 10; i++) {
		scanf("%d", &B[i]);
	}
	
	for(i = 0; i < 10; i++) {
		if(A[i] > B[i]) {
			ptA += 3;
		}
		else if(B[i] > A[i]) {
			ptB += 3;
		}
		else {
			ptA += 1;
			ptB += 1;
		}
	}
	printf("%d %d\n", ptA, ptB);
	
	if(ptA > ptB) {
		printf("A");
	}
	else if(ptB > ptA) {
		printf("B");
	}
	else {
		for(i = 9; i >= 0; i--) {
			if(A[i] > B[i]) {
				printf("A");
				return 0;
			}
			else if(B[i] > A[i]) {
				printf("B");
				return 0;
			}
		}
		printf("D");
	}

	return 0;
}
