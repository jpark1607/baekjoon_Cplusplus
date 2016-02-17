#include <stdio.h>

int main(void) {
	long long A, B;
	int m;
	long long nArr[30] = {0, };
	long long S = 0;
	int i = 0, k = 0;
	
	scanf("%lld %lld", &A, &B);
	scanf("%d", &m);
	
	for(i = 0; i < m; i++) {
		scanf("%lld", &nArr[i]);
	}
	
	for(i = 0; i < m; i++) {
		S *= A;
		S += nArr[i];
	}
	
	while(S > 0) {
		nArr[k] = S % B;
		k += 1;
		S /= B;
	}
	
	for(i = k - 1; i >= 0; i--) {
		printf("%lld ", nArr[i]);
	}
	
	return 0;
}
