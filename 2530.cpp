#include <stdio.h>

int main(void) {
	int A, B, C;
	int D;
	int tA, tB, tC;
	
	scanf("%d %d %d", &A, &B, &C);
	scanf("%d", &D);
	
	tC = D % 60;
	D /= 60;
	tB = D % 60;
	tA = D / 60;
	
	A += tA;
	B += tB;
	C += tC;
	
	while(A > 23 || B > 59 || C > 59) {
		if(C > 59) {
			B += 1;
			C -= 60;
		}
		if(B > 59) {
			A += 1;
			B -= 60;
		}
		if(A > 23)
			A -= 24;
	}
		
	printf("%d %d %d", A, B, C);
	return 0;
}
