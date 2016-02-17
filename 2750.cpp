#include <stdio.h>

int main(void) {
	int N, num;
	int nPosArr[1001] = {0, };
	int nNegArr[1000] = {0, };
	int i;
		
	scanf("%d", &N);
	
	for(i = 0; i < N; i++) {
		scanf("%d", &num);
		if(num >= 0) {
			nPosArr[num] += 1;
		}
		else {
			nNegArr[1000 + num] += 1;
		}		
	}
	
	for(i = 0; i < 1000; i++) {
		if(nNegArr[i] == 1) {
			printf("%d\n", i - 1000);
		}
	}
	for(i = 0; i <= 1000; i++) {
		if(nPosArr[i] == 1) {
			printf("%d\n", i);
		}
	}
	
	
	return 0;
}
