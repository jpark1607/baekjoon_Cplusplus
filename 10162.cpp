#include <stdio.h>

int main(void) {
	int T;
	int A, B, C;
	scanf("%d", &T);
	
	if(T % 10 != 0) {
		printf("%d", -1);
		return 0;
	}
	
	A = T / 300;
	T %= 300;
	B = T / 60;
	T %= 60;
	C = T / 10;
	
	printf("%d %d %d", A, B, C);
	return 0;
}

