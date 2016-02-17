#include <stdio.h>

int main(void) {
	int n, i, p, j;
	int cost, max;
	char S[30], T[30];
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++) {
		scanf("%d", &p);
		max = 0;
		for(j = 0; j < p; j++) {
			scanf("%d", &cost);
			if(cost > max) {
				max = cost;
				scanf("%s", S);
			}
			else {
				scanf("%s", T);
			}
		}
		
		printf("%s\n", S);
	}
	return 0;
}
