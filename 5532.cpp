#include <stdio.h>

int main(void) {
	int L, A, B, C, D;
	
	scanf("%d", &L);
	scanf("%d", &A);
	scanf("%d", &B);
	scanf("%d", &C);
	scanf("%d", &D);
	
	if(A % C == 0)
		A -= 1;
	if(B % D == 0)
		B -= 1;
		
	A = (A / C) + 1;
	B = (B / D) + 1;
	
	if(A > B)
		printf("%d", L - A);
	else
		printf("%d", L - B);
		
	return 0;
}

