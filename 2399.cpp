#include <stdio.h>

int main(void) {
	int n, i, j, k;
	
	long long x[10000] = {0, };
	long long temp;
	long long sum = 0;
	
	scanf("%lld", &n);
	
	for(i = 0; i < n; ++i) {
		scanf("%lld", &temp);
		for(j = i - 1; j >= 0; --j) {
			if(temp > x[j])
				break;
		}
		j += 1;
		for(k = i; k > j; --k) {
			x[k] = x[k - 1];
		}
		x[j] = temp;
	}
	
	for(i = 0; i < n - 1; ++i) {
		for(j = i + 1; j < n; ++j) {
			sum += (x[j] - x[i]) * 2;
		}
	}
	
	printf("%lld", sum);
	return 0;
}
