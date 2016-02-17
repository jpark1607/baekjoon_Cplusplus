#include <stdio.h>
#include <string.h>

int main(void) {
	char A[10001], B[10001];
	int lenA, lenB;
	int i, j;
	long long sumA = 0, sumB = 0;
	long long sum = 0;
	
	scanf("%s %s", A, B);
	lenA = strlen(A);
	lenB = strlen(B);
	for(i = 0; i < lenA; i++) {
		sumA += A[i] - '0';
	}
	for(i = 0; i < lenB; i++) {
		sumB += B[i] - '0';
	}
	
	sum = sumA * sumB;
	
	printf("%lld", sum);

	return 0;
}

