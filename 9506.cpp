#include <stdio.h>
#include <math.h>

int main(void) {
	int n;
	int nArr[501];
	int i, j;
	int k = 251;
	int n_sqrt;
	int sum;
	
	scanf("%d", &n);
	
	while(n != -1) {
		for(j = 0; j < k; j++) {
			nArr[j] = 0;
			nArr[500 - j] = 0;
		}
		
		sum = 1;
		k = 0;
		n_sqrt = sqrt(n);
		
		for(i = 2; i <= n_sqrt; i++) {
			if(n % i == 0) {
				nArr[k] = i;
				nArr[500 - k] = n / i;
				k += 1;
			}
		}
		
		for(j = 0; j < k; j++)
			sum += nArr[j];
		for(j = 501 - k; j < 501; j++)
			sum += nArr[j];
			
		if(n == sum) {
			printf("%d = 1", n);
			for(j = 0; j < k; j++)
				printf(" + %d", nArr[j]);
			for(j = 501 - k; j < 501; j++)
				printf(" + %d", nArr[j]);
			printf("\n");
		}
		else {
			printf("%d is NOT perfect.\n", n);
		}
		scanf("%d", &n);
	}
	
	return 0;
}
