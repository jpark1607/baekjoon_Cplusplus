#include <stdio.h>

int main(void) {
	
	int nArr[7] = {64, 32, 16, 8, 4, 2, 1};
	int N = 0;
	int i = 0;
	int nCount = 0;
	scanf("%d", &N);
	
	for(i = 0; N != 0; i++) {
		if(N >= nArr[i]) {
			++nCount;
			N -= nArr[i];
		}
	}
	
	printf("%d", nCount);
	return 0;
	
}
