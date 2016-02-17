#include <stdio.h>
#include <math.h>

int main(void) {
	int num;
	int i, j, t, r, x;
	int so[100001];
	int prime[80000] = {0, };
	int A, B;
	int temp, count, check;
	
	
	scanf("%d %d", &A, &B);
	num = B;
	check = 0;
	
	for(i = 1; i <= num; ++i) {
		so[i] = 1;
	}
	for(r = 2; r <= num; ++r) {
		if(so[r] == 0)
			continue;
		for(t = r * 2; t <= num; t += r)
			so[t] = 0;
	}
	x = 1;
	for(i = 1; i <= num; ++i) {
		if(so[i] == 1) {
			prime[x] = i;
			x += 1;
		}
	}
	so[0] = 0, so[1] = 0;
	
	for(i = A; i <= B; ++i) {
		temp = i;
		j = 2;
		count = 0;
		while(temp != 1) {
			if(temp % prime[j] == 0) { 
				temp /= prime[j];
				count += 1;
			}
			else {
				j += 1;
			}	
		}
		
		if(so[count] == 1) {
			check += 1;
		}
	}
	
	printf("%d", check);
	
	return 0;
}

