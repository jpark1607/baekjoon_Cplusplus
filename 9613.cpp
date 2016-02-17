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
	int GCD;
	int t, n;
	int i, j, k;
	int nArr[100];
	
	scanf("%d", &t);
	for(i = 0; i < t; i++) {
		scanf("%d", &n);
		for(j = 0; j < n; j++) {
			scanf("%d", &nArr[j]);
		}
		
		GCD = 0;
		
		for(j = 0; j < n - 1; j++) {
			for(k = j + 1; k < n; k++)
				GCD += f_gcd(nArr[j], nArr[k]);
		}
		
		printf("%d\n", GCD);
	}
	
	return 0;
}
