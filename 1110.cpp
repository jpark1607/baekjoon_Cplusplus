#include <stdio.h>

int main(void) {
	int N;
	int nBackup;
	int n1_b, n2_b;
	int nCount = 0;
	
	scanf("%d", &N);
	nBackup = N;
	
	do {
		n1_b = N % 10;
		n2_b = (N / 10) + n1_b;
		N = (n1_b * 10) + (n2_b % 10);
		nCount++;
	} while(nBackup != N);
	
	printf("%d", nCount);
	return 0;
}
