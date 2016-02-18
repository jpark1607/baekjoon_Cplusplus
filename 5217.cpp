#include <stdio.h>

int main(void) {
	int T, t;
	int n;
	int i, I;
	
	scanf("%d", &T);
	
	for(t = 0; t < T; t++) {
		scanf("%d", &n);
		I = (n - 1) / 2;
		
		printf("Pairs for %d:", n);
		for(i = 1; i <= I; i++) {
			printf(" %d %d", i, n - i);
			if(i != I)
				printf(",");
		}
		printf("\n");
	}
	return 0;
}

