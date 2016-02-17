#include <stdio.h>

int main(void) {
	int nArr[1001] = {0, };
	int N, i, j;
	int sum = 0;
	
	scanf("%d", &N);
	for(i = 1; i <= N; i++)
		scanf("%d", &nArr[i]);

	for(i = 1; i <= N - 1; i++) {
		for(j = 2; j <= N; j++) {
			if(nArr[j - 1] < nArr[j]) {
				int temp = nArr[j];
				nArr[j] = nArr[j - 1];
				nArr[j - 1] = temp;
			}
		}
	}
	
	for(i = 1; i <= N; i++)
		sum += i * nArr[i];

	printf("%d", sum);
	return 0;
}

