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

int f_lcm(int gcd, int n1, int n2) {
	return gcd * (n1 / gcd) * (n2 / gcd);
}

int main(void) {
	int GCD, LCM;
	int T, a, b, i;
	
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d %d", &a, &b);
		GCD = f_gcd(a, b);
		LCM = f_lcm(GCD, a, b);
		
		printf("%d %d\n", LCM, GCD);
	}
	
	return 0;
}
