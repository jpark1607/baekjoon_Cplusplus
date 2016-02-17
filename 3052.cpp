#include <stdio.h>

int main(void) {
	int rArr[42];
	int i;
	int N;
	int nCount = 0;
	
	for(i = 0; i < 42; i++) {
		rArr[i] = 0;
	}
	
	for(i = 0; i < 10; i++) {
		scanf("%d", &N);
		rArr[N % 42] += 1;
	}
	
	for(i = 0; i < 42; i++) {
		if(rArr[i] != 0) {
			nCount += 1;
		}
	}
	
	printf("%d", nCount);
}

