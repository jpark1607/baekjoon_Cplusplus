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


int f_lcm(int n1, int n2, int gcd) {
	return n1 * n2 / gcd;
}

int main(void) {
	int A_up, A_down, B_up, B_down;
	int LCM;
	int up, down;
	int GCD;
	
	scanf("%d %d", &A_up, &A_down);
	scanf("%d %d", &B_up, &B_down);

	LCM = f_lcm(A_down, B_down, f_gcd(A_down, B_down));
	
	up = A_up * (LCM / A_down) + B_up * (LCM / B_down);
	
	GCD = f_gcd(up, LCM);
	
	down = LCM / GCD;
	up = up / GCD;
	
	printf("%d %d", up, down);
	
	return 0;
}
