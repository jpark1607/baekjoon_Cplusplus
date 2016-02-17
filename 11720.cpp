#include <stdio.h>

int main(void) {
	int N;
	char nData[100];
	int i;
	int sum = 0;
	
	for(i = 0; i < N; i++) {
		nData[i] = 48;
	}
	scanf("%d", &N);
	scanf("%s", nData);
	
	for(i = 0; i < N; i++) {
		sum += nData[i];
	}
	sum -= N * 48;
	
	printf("%d", sum);
	
	
	return 0;
}
