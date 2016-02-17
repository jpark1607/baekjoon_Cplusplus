#include <stdio.h>

int main(void) {
	int k;
	int n1, n0;
	int i;
	
	scanf("%d", &k);
	n1 = k, n0 = k - 1;
	
	for(i = 0; i < n1; i++) {
		printf("1");
	}
	for(i = 0; i < n0; i++) {
		printf("0");
	}
	
	return 0;
}
