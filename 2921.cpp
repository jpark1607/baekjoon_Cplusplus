#include <stdio.h>

int main(void) {
	int N;
	int i;
	int sum = 0;
	
	scanf("%d", &N);
	
	for(i = 0; i <= N; i++) {
		sum += (i * (i + 1)) / 2;
		sum += (i * (i + 1));
	}
	
	printf("%d", sum);
	return 0;
}

