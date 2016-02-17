#include <stdio.h>

int main(void) {
	int n, i;
	int A = 100, B = 100;
	int a, b;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		if(a > b)
			B -= a;
		else if(b > a)
			A -= b;
	}
	
	printf("%d\n%d", A, B);
	
	return 0;
}

