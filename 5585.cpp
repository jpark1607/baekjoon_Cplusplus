#include <stdio.h>

int main(void) {
	int N;
	int nCount = 0;
	
	scanf("%d", &N);
	N = 1000 - N;
	
	while(N >= 500) {
		nCount += 1;
		N -= 500;
	}
	while(N >= 100) {
		nCount += 1;
		N -= 100;
	}
	while(N >= 50) {
		nCount += 1;
		N -= 50;
	}
	while(N >= 10) {
		nCount += 1;
		N -= 10;
	}
	while(N >= 5) {
		nCount += 1;
		N -= 5;
	}
	while(N >= 1) {
		nCount += 1;
		N -= 1;
	}
	
	printf("%d", nCount);
	return 0;
}


