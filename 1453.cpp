#include <stdio.h>

int main(void) {
	int N, i;
	int pcArr[101];
	int pcData = 0, nNot = 0;
	
	for(i = 0; i < 101; i++) {
		pcArr[i] = 0;
	}
	
	scanf("%d", &N);
	
	for(i = 0; i < N; i++) {
		scanf("%d", &pcData);
		if(pcArr[pcData] == 0) {
			pcArr[pcData] += 1;
		}
		else {
			nNot += 1;
		}
	}
	
	printf("%d", nNot);
	
	return 0;
}
