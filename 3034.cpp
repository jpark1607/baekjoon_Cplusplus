#include <stdio.h>
#include <math.h>

int main(void) {
	int N, W, H, L;
	int T, i;
	
	scanf("%d %d %d", &N, &W, &H);
	L = sqrt(W * W + H * H);
	
	for(i = 0; i < N; i++) {
		scanf("%d", &T);
		if(T <= L)
			printf("DA\n");
		else
			printf("NE\n");
	}
	
	return 0;
}


