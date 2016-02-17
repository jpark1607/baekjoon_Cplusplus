#include <stdio.h>
#include <math.h>

int main(void) {
	int R, B, tot;
	int L, W;
	int Wmax;
	int i;
	
	scanf("%d %d", &R, &B);
	tot = R + B;
	Wmax = sqrt(tot);
	
	for(i = 3; i <= Wmax; i++) {
		if(tot % i == 0) {
			W = i;
			L = tot / W;
			if((W - 2) * (L - 2) == B)
				break;
		}
	}
	
	printf("%d %d", L, W);
	return 0;
}
