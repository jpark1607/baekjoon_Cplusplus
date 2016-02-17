#include <stdio.h>

int main(void) {
	int K;
	int i;
	int nArr[100000];
	int num;
	int idx = 0;
	long long sum = 0;
	
	scanf("%d", &K);
	
	for(i = 0; i < K; i++) {
		scanf("%d", &num);
		
		if(num == 0) {
			idx -= 1;
			nArr[idx] = 0;
		}
		else {
			nArr[idx] = num;
			idx += 1;
		}
	}
	
	for(i = 0; i < idx; i++) {
		sum += nArr[i];
	}
	
	printf("%lld", sum);
	return 0;
}

