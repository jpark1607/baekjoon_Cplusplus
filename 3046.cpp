#include <stdio.h>

int main(void) {
	int R1, R2;
	float S;
	scanf("%d %f", &R1, &S);
	S *= 2;
	R2 = (int)S - R1;
	printf("%d", R2);
}

