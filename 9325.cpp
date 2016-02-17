#include <stdio.h>

int main(void) {
	int T, i;
	int money;
	int n, j;
	int q, p;
	scanf("%d", &T);
	
	for(i = 0; i < T; i++) {
		scanf("%d", &money);
		scanf("%d", &n);
		for(j = 0; j < n; j++) {
			scanf("%d %d", &q, &p);
			money += q * p;
		}
		
		printf("%d\n", money);
	}
	
	return 0;
}
