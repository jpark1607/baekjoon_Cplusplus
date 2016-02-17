#include <stdio.h>

int main(void) {
	int n;
	int nSum = 0;
	scanf("%d", &n);
	nSum = (n * (n + 1)) / 2;
	printf("%d", nSum);
	return 0;	
}
