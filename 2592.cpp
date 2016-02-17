#include <stdio.h>

int main(void) {
	int i;
	int nArr[100];
	int N;
	int min = 100, max = 0;
	int mostN = 0, mostIdx = 0;
	int sum = 0;
	for(i = 0; i < 100; i++)
		nArr[i] = 0;
		
	for(i = 0; i < 10; i++) {
		scanf("%d", &N);
		N /= 10;
		sum += N;
		nArr[N] += 1;
		
		if(N < min)
			min = N;
		if(N > max)
			max = N;
	}
	
	printf("%d\n", sum);
	
	for(i = min; i <= max; i++) {
		if(nArr[i] > mostN) {
			mostN = nArr[i];
			mostIdx = i;
		}
	}
	
	printf("%d", mostIdx * 10);
	return 0;
}
