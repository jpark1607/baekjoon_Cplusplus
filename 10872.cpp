#include <stdio.h>

int main(void) {
	int N, i;
	int all = 1;
	
	scanf("%d", &N);
	for(i = 1; i <= N; i++) {
		all *= i;
	}
	
	printf("%d", all);
	return 0;
}
