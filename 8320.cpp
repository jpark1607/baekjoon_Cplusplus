#include <stdio.h>
#include <math.h>

int main(void) {
	int n;
	int N;
	int i;
	int sum = 0;
	
	scanf("%d", &n);
	N = sqrt(n);
	for(i = 1; i <= N; i++) {
		sum += n / i - (i - 1);
	}
	
	printf("%d", sum);
	
    return 0;
}
