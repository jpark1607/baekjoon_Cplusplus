#include <stdio.h>
void swap(int *n1, int *n2) {
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int f_gcd(int n1, int n2) {
	int check;
	
	if(n1 < n2)
		swap(&n1, &n2);
	
	check = n1 % n2;
	while(check != 0) {
		n1 = n1 - n2;
		if(n1 < n2)
			swap(&n1, &n2);
		check = n1 % n2;
	}
	
	return n2;
}

int main(void) {
	int GCD, LCM;
	int N, M;
	
	scanf("%d %d", &N, &M);
	GCD = f_gcd(N, M);
	
	printf("%d", GCD * (M / GCD - 1));
	
	return 0;
}
