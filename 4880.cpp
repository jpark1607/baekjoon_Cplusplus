#include <stdio.h>

int main(void) {
	int A, B, C;
	
	scanf("%d %d %d", &A, &B, &C);
	
	while(A != 0 || B != 0 || C != 0) {
		if(B - A == C - B)
			printf("AP %d\n", C + (B - A));
		else
			printf("GP %d\n", C * (B / A));
		
		scanf("%d %d %d", &A, &B, &C);
	}
	return 0;
}

