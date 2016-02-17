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
	int num1, num2;
	int n, i;
	
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d %d", &num1, &num2);
		GCD = f_gcd(num1, num2);
		LCM = f_lcm(GCD, num1, num2);
		
		printf("%d\n", LCM);
	}
	return 0;
}
