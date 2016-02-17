#include <stdio.h>
#include <string.h>

int main(void) {
	char A[10005] = "", B[100005] = "";
	int S[10005] = {0, };
	int lenA, lenB;
	int K, len;
	int i;
	
	scanf("%s %s", A, B);
	lenA = strlen(A);
	lenB = strlen(B);
	len = lenA;
	
	if(lenA > lenB) {
		K = lenA - lenB;
		for(i = lenB; i >= 0; i--) {
			B[i + K] = B[i];
		}
		for(i = 0; i < K; i++) {
			B[i] = '0';
		}
	}
	else if(lenA < lenB) {
		K = lenB - lenA;
		len = lenB;
		for(i = lenA; i >= 0; i--) {
			A[i + K] = A[i];
		}
		for(i = 0; i < K; i++) {
			A[i] = '0';
		}
	}
	
	for(i = len - 1; i > 0; i--) {
		S[i] += B[i] + A[i] - 96;
		if(S[i] >= 10) {
			S[i] -= 10;
			S[i - 1] += 1;
		}
	}
	S[0] += A[0] + B[0] - 96;
	
	for(i = 0; i < len; i++)
		printf("%d", S[i]);
	
	return 0;
}

