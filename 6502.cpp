#include <stdio.h>
#include <math.h>

int main(void) {
	double r, w, l;
	int idx = 1;
	scanf("%lf", &r);
	
	while(r != 0.0) {
		scanf("%lf %lf", &w, &l);
		if(sqrt(w * w + l * l) <= r * 2)
			printf("Pizza %d fits on the table.\n", idx);
		else
			printf("Pizza %d does not fit on the table.\n", idx);
		
		idx += 1;
		scanf("%lf", &r);
	}
    return 0;
}
