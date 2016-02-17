#include <stdio.h>
		
int main(void) {
	int N, P;
	int nArr[100] = {0, };
	int num, i;
	int count = 0;
	
	scanf("%d %d", &N, &P);
	num = N;
	
	while(nArr[num] != 3) {
		nArr[num] += 1;
		num = (num * N) % P;
	}
	
	for(i = 0; i < P; i++) {
		if(nArr[i] >= 2)
			count += 1;
	}
	
	printf("%d", count);
	return 0;
}
