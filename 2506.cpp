#include <stdio.h>

int main(void) {
	int N;
	int nArr[100][2];
	int i;
	int sum = 0;
	
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		scanf("%d", &nArr[i][0]);
	}
	
	if(nArr[0][0] == 1) {
		nArr[0][1] = 1;
	}
	else {
		nArr[0][1] = 0;
	}
	
	for(i = 1; i < N; i++) {
		if(nArr[i][0] == 1) {
			nArr[i][1] = nArr[i - 1][1] + 1;
		}
		else {
			nArr[i][1] = 0;
		}
	}
	
	for(i = 0; i < N; i++) {
		sum += nArr[i][1];
	}
	
	printf("%d", sum);
	return 0;
}
