#include <stdio.h>

int main(void) {
	int T, i, j;
	int Y = 0, K = 0;
	int y, k;
	scanf("%d", &T);
	
	for(i = 0; i < T; i++) {
		for(j = 0; j < 9; j++) {
			scanf("%d %d", &y, &k);
			Y += y;
			K += k;
		}
		if(Y > K)
			printf("Yonsei\n");
		else if(K > Y)
			printf("Korea\n");
		else
			printf("Draw\n");
	}
	
	return 0;
}

