#include <stdio.h>

int main(void) {
	int nArr[31] = {0, };
	int N, i;
	
	for(i = 0; i < 28; i++) {
		scanf("%d", &N);
		nArr[N] += 1;
	}
	
	for(i = 1; i < 31; i++) {
		if(nArr[i] == 0)
			printf("%d\n", i);
	}
	
	return 0;
}
