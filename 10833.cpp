#include <stdio.h>

int main(void) {
	int N, i;
	int left = 0;
	int s, a;
	
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		scanf("%d %d", &s, &a);
		left += a % s;
	}
	
	printf("%d", left);
	return 0;
}
