#include <stdio.h>

int main(void) {
	unsigned long long N;
	scanf("%llu", &N);
	printf("%llu\n",  (N + 1) * (N * (N - 1) / 2));
	
	return 0;
}

