#include <stdio.h>

int main(void) {
	int T, i;
	int N, j;
	int num, sum;
	scanf("%d", &T);
	
	for(i = 0; i < T; i++) {
		scanf("%d", &N);
		sum = 0;
		for(j = 0; j < N; j++) {
			scanf("%d", &num);
			sum += num;
		}
		
		printf("%d\n", sum);
	}
	
	return 0;
}
