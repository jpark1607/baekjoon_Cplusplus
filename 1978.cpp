#include <stdio.h>
#include <math.h>

int main(void) {
	int num;
	int i, t, r, x;
	int so[1001];
	int prime[1000] = {0, };
	int check;
	int N, temp;
	
	scanf("%d", &N);
	check = 0;
	
	for(i = 1; i <= 1000; ++i) {
		so[i] = 1;
	}
	for(r = 2; r <= 1000; ++r) {
		if(so[r] == 0)
			continue;
		for(t = r * 2; t <= 1000; t += r)
			so[t] = 0;
	}
	so[0] = 0, so[1] = 0;
	
	for(i = 0; i < N; i++) {
		scanf("%d", &temp);
		if(so[temp] == 1)
			check += 1;
	}
	
	printf("%d", check);
	
	return 0;
}

