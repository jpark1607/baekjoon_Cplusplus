#include <stdio.h>
#include <math.h>

void swap(double *n1, double *n2) {
	double temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int main(void) {
	int n, i;
	double a, b, c;
	double comp;
	
	scanf("%d", &n);
	for(i = 1; i <= n; i++) {
		scanf("%lf %lf %lf", &a, &b, &c);
		if(a > b)
			swap(&a, &b);
		if(b > c)
			swap(&b, &c);
		if(a > b)
			swap(&a, &b);
		
		comp = sqrt(a * a + b * b);
		
		printf("Scenario #%d:\n", i);
		if(comp == c)
			printf("yes\n");
		else
			printf("no\n");
		
		if(i != n)
			printf("\n");
	}
    return 0;
}
