#include <stdio.h>

int main(void) {
	int A = 0, B = 0;
	int a, b;
	int N, i;
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		scanf("%d %d", &a, &b);
		if(a > b)
			A += 1;
		else if(b > a)
			B += 1;
	}
	
	printf("%d %d", A, B);
	
	return 0;
}

