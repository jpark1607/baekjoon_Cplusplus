#include <stdio.h>

int main(void) {
	unsigned int fibo[100][2];
	int n, i;
	
	scanf("%d", &n);
	fibo[0][1] = 0;
	fibo[1][1] = 1;
	
	if(n < 45) {
		for(i = 2; i <= n; i++) {
			fibo[i][1] = fibo[i - 1][1] + fibo[i - 2][1];
		}
		printf("%u", fibo[n][1]);
		return 0;
	}
	else {
		for(i = 2; i < 45; i++) {
			fibo[i][1] = fibo[i - 1][1] + fibo[i - 2][1];
			fibo[i][0] = 0;
		}
		
		for(i = 45; i <= n; i++) {
			fibo[i][1] = fibo[i - 1][1] + fibo[i - 2][1];
			fibo[i][0] = fibo[i - 1][0] + fibo[i - 2][0];
			if(fibo[i][1] >= 1000000000) {
				fibo[i][1] -= 1000000000;
				fibo[i][0] += 1;
			}
		}
		printf("%u%09u", fibo[n][0], fibo[n][1]);
	}
	return 0;
}

