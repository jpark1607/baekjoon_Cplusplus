#include <stdio.h>

int main(void) {
	long long A, B;
	long long i;
	
	scanf("%lld %lld", &A, &B);
	
	if(A > B) {
		long long temp = A;
		A = B;
		B = temp;
	}
	if(A == B || A + 1 == B) {
		printf("%d", 0);
		return 0;
	}
	
	printf("%lld\n", B - A - 1);
	for(i = A + 1; i < B; i++) {
		printf("%lld ", i);
	}
	return 0;
}


