#include <stdio.h>
#include <math.h>

int main(void) {
	double L, A, B;
	double c;
	
	scanf("%lf %lf %lf", &L, &A, &B);
	c = sqrt(A * A + B * B);
	
	printf("%d %d", (int)((L / c) * A), (int)((L / c) * B));
	return 0;
}


