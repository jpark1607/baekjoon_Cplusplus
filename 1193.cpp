#include <stdio.h>

int main(void) {
	int X;
	int n;
	int sum = 0;
	int nbackup;
	
	scanf("%d", &X);
	
	n = 1;
	sum += n;
	while(X > sum) {
		n += 1;
		sum += n;
	}
	
	nbackup = n;
	
	while(X != sum) {
		sum -= 1;
		n -= 1;
	}
	
	if(nbackup % 2 == 0) {
		printf("%d/%d", n, nbackup + 1 - n);
	}
	else {
		printf("%d/%d", nbackup + 1 - n, n);
	}
	
	return 0;
}
