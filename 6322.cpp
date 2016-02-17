#include <stdio.h>
#include <math.h>

int main(void) {
	double a, b, c;
	int idx = 1;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	while(a != 0.0 || b != 0.0 || c != 0.0) {
		printf("Triangle #%d\n", idx);
		if(a == -1.0) {
			a = sqrt(c * c - b * b);
			if(a > 0)
				printf("a = %.3lf", a);
			else
				printf("Impossible.");
		}
		else if(b == -1.0) {
			b = sqrt(c * c - a * a);
			if(b > 0)
				printf("b = %.3lf", b);
			else
				printf("Impossible.");
		}
		else if(c == -1.0) {
			c = sqrt(a * a + b * b);
			if(c > 0)
				printf("c = %.3lf", c);
			else
				printf("Impossible.");
		}
		printf("\n\n");
		idx += 1;
		scanf("%lf %lf %lf", &a, &b, &c);
	}
    return 0;
}
