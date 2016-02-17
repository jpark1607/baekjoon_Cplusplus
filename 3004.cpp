#include <stdio.h>

int main(void) {
	int top[2] = {0, };
	int N, i;
	double piece = 1.0;
	int total = 0;
	
	scanf("%d", &N);
	
	for(i = 0; i <= N; i++) {
		total += (int)piece;
		piece += 0.5;
	}
	
	printf("%d", total);
	return 0;
}
