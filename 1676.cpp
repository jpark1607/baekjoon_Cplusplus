#include <stdio.h>
int factorial_zero(int n, int *zero_cal) {
	int temp = n;
	if(temp % 5 == 0) {
		while(temp % 5 == 0) {
			*zero_cal += 1;
			temp /= 5;
		}
	}
	if(n == 1) {
		return 1;
	}
	return factorial_zero(n - 1, zero_cal);
}

int main(void) {
	int zero_cal = 0;
	int N;
	scanf("%d", &N);
	factorial_zero(N, &zero_cal);
	printf("%d", zero_cal);
	return 0;
}

