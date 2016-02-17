#include <stdio.h>

int main(void) {
	int N, i;
	int sum = 0;
	
	for(i = 0; i < 5; i++) {
		scanf("%d", &N);
		sum += N;
	}
	
	printf("%d", sum);
	
	return 0;
}
