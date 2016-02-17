#include <stdio.h>

int main(void) {
	int A, B;
	int C;
	int tA, tB;
	
	scanf("%d %d", &A, &B);
	scanf("%d", &C);
	tA = C / 60;
	tB = C % 60;
	
	A += tA;
	B += tB;
	
	if(B > 59) {
		A += 1;
		B -= 60;
	}
	if(A > 23)
		A -= 24;
		
	printf("%d %d", A, B);
	return 0;
}
