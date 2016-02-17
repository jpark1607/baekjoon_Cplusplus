#include <stdio.h>
#include <math.h>
void swap(double *d1, double *d2) {
	double temp = *d1;
	*d1 = *d2;
	*d2 = temp;
}

int main(void) {
	double x1, y1, r1, x2, y2, r2;
	double dis12;
	double first, second, third;
	double temp;
	int T, i;
	
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);
		if(x1 == x2 && y1 == y2) {
			if(r1 == r2) {
				printf("%d\n", -1);
			}
			else {
				printf("%d\n", 0);
			}
		}
		else {
			dis12 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
			first = dis12;
			second = r1;
			third = r2;
			while(first < second || second < third) {
				if(second < third) {
					swap(&second, &third);
				}
				if(first < second) {
					swap(&first, &second);
				}
			}
			if(second + third > first) {
				printf("%d\n", 2);
			}
			else if(second + third < first) {
				printf("%d\n", 0);
			}
			else {
				printf("%d\n", 1);
			}
		}
	}
	
	return 0;
}
