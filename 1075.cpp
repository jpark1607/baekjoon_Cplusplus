#include <stdio.h>

int main(void) {
	int N, F;
	int R;
	
	scanf("%d", &N);
	scanf("%d", &F);
	
	N = (N / 100) * 100;
	R = N % F;
	if(R == 0) {
		printf("%02d", 0);
	}
	else {
		printf("%02d", F - R);
	}
	return 0;
}
