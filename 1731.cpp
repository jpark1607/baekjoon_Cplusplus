#include <stdio.h>


int main(void) {
	int N, i;
	int d, r;
	int nArr[50] = {0, };
	
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		scanf("%d", &nArr[i]);
	}
	d = nArr[1] - nArr[0];
	
	if(nArr[2] - nArr[1] == d) {
		printf("%d", nArr[N - 1] + d);
	}
	else {
		r = nArr[1] / nArr[0];
		printf("%d", nArr[N - 1] * r);
	}
	
	return 0;
}


