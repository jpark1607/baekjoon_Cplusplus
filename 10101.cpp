#include <stdio.h>

int main(void) {
	int A, B, C;
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	
	if(A + B + C != 180)
		printf("Error");
	else if(A == B && A == C)
		printf("Equilateral");
	else if(A == B || A == C || B == C)
		printf("Isosceles");
	else
		printf("Scalene");
		
	return 0;
}

