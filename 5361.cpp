#include <stdio.h>

int main(void) {
	char S[10][10];
	int T, t;
	double A, B, C, D, E;
	double sum;
	scanf("%d", &T);
	for(t = 0; t < T; t++) {
		scanf("%lf %lf %lf %lf %lf", &A, &B, &C, &D, &E);
		sum = 350.34 * A + 230.90 * B + 190.55 * C + 125.30 * D + 180.90 * E;
		printf("$%.2lf\n", sum);
	}
	return 0;
}

