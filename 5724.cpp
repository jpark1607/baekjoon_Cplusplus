#include <stdio.h>

int main(void) {
	int N;
	int i;
	int sum;
	
	scanf("%d", &N);
	while(N) {
		sum = 0;
		for(i = 1; i <= N; i++) 
			sum += i * i;
		printf("%d\n", sum);
		scanf("%d", &N);
	}
    return 0;
}

