#include <stdio.h>
int Rev(int N) {
	int nArr[4];
	int i, j, k;
	int dec = 0;
	int nRes = 0;
	
	for(i = 0; N != 0; i++) {
		nArr[i] = N % 10;
		N /= 10;
	}
	for(j = 0; j < i; j++) {
		dec = 1;
		for(k = i - 1; k > j; k--) {
			dec *= 10;
		}
		nRes += nArr[j] * dec;
	}
	
	return nRes;
}
		
int main(void) {
	int X, Y;
	int sum;
	
	scanf("%d %d", &X, &Y);
	sum = Rev(X) + Rev(Y);
	printf("%d", Rev(sum));
	
	return 0;
}

