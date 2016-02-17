#include <stdio.h>
void swap(unsigned long long *n1, unsigned long long *n2) {
	unsigned long long temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

unsigned long long f_gcd(unsigned long long n1, unsigned long long n2) {
	unsigned long long check;
	
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
	unsigned long long A, B;
	unsigned long long GCD;
	unsigned long long i;
	
	scanf("%llu %llu", &A, &B);
	
	GCD = f_gcd(A, B);
	for(i = 0; i < GCD; i++) {
		printf("1");
	}
	
	return 0;
}
