#include <stdio.h>

int rev(int n) {
	int res = 0;
	
	while(n) {
		res *= 10;
		res += n % 10;
		n /= 10;
	}
	
	return res;
}

int comp(int n1, int n2) {
	if(n1 > n2)
		return n1;
	else
		return n2;
}

int main(void) {
	int A, B;
	scanf("%d %d", &A, &B);
	
	printf("%d", comp(rev(A), rev(B)));
	return 0;
}

