#include <stdio.h>

int main(void) {
	int T, i;
	long long N;
	long long max;
	
	scanf("%d", &T);
	
	for(i = 0; i < T; i++) {
	
		scanf("%lld", &N);
		max = N;
		
		while(N != 1) {
			if(N % 2 == 0)
				N /= 2;
			else
				N = N * 3 + 1;
			
			if(N > max)
				max = N;
		}
		
		printf("%lld\n", max);
	}

	return 0;
}
