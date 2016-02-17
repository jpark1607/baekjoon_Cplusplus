#include <stdio.h>

int main(void) {
	int nArr[21] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
					11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
	int temp;
	int S, E;
	int Q, i;
	int t;
	
	for(t = 0; t < 10; t++) {
		scanf("%d %d", &S, &E);
		Q = E - S + 1;
		Q /= 2;
		for(i = 0; i < Q; i++) {
			temp = nArr[S + i];
			nArr[S + i] = nArr[E - i];
			nArr[E - i] = temp;
		}
	}
	
	for(t = 1; t <= 20; t++)
		printf("%d ", nArr[t]);

	return 0;
}
