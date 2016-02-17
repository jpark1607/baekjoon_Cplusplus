#include <stdio.h>
#include <math.h>

int main(void) {
	int T, i;
	int n, j;
	int cand[10];
	int tot;
	int maxN, maxI, max2;
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d", &n);
		tot = 0;
		maxN = 0;
		maxI = 0;
		
		for(j = 0; j < n; j++) {
			scanf("%d", &cand[j]);
		}
		
		for(j = 0; j < n; j++) {
			tot += cand[j];
			if(cand[j] > maxN) {
				maxN = cand[j];
				maxI = j;
				max2 = 0;
			}
			else if(cand[j] == maxN) {
				max2 = cand[j];
			}
		}
		if(maxN == max2)
			printf("no winner\n");
		else if(maxN * 2 > tot)
			printf("majority winner %d\n", maxI + 1);
		else
			printf("minority winner %d\n", maxI + 1);
	}
	
	return 0;
}
