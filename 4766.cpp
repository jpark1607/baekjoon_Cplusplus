#include <stdio.h>

int main(void) {
	double A, B;
	
	scanf("%lf", &A);
	scanf("%lf", &B);
	while(B != 999.0) {
		printf("%.2lf\n", B - A);
		A = B;
		scanf("%lf", &B);
	}
	return 0;
}

