#include <stdio.h>

int main(void) {
	int A, B, C, D;
	int S, T;
	
	scanf("%d %d %d %d", &A, &B, &C, &D);
	S = A + B + C + D;
	scanf("%d %d %d %d", &A, &B, &C, &D);
	T = A + B + C + D;
	
	if(S > T)
		printf("%d", S);
	else
		printf("%d", T);
	
	return 0;
}


