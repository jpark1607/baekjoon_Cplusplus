#include <stdio.h>

int main(void) {
	int N, M;
	int A[10000];
	int i, j;
	int count = 0;
	int sum = 0;
	
	scanf("%d %d", &N, &M);
	
	for(i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	
	i = 0;
	j = 0;
	sum = A[0];
	while(i < N) {
		if(sum < M) {
			++i;
			sum += A[i];
		}
		else if(sum > M) {
			sum -= A[j];
			++j;
		}
		else if(sum == M) {
			++count;
			++i;
			sum += A[i];
		}
	}
		
	printf("%d", count);	
	return 0;
}
