#include <stdio.h>
int makefour(int n, int *n_hi) {
	switch(n % 4) {
	case 1:
		*n_hi = 3;
		return n + 3;
	case 2:
		*n_hi = 2;
		return n + 2;
	case 3:
		*n_hi = 1;
		return n + 1;
	case 0:
		*n_hi = 0;
		return n;
	}	
}

int dist(int a, int b) {
	switch(a > b) {
	case 1:
		return a - b;
	case 0:
		return b - a;
	}
}

int main(void) {
	int N, M;
	int N_hi, M_hi;
	
	scanf("%d %d", &N, &M);
	printf("%d", ((dist(makefour(N, &N_hi), makefour(M, &M_hi)) / 4) + dist(N_hi, M_hi)));
	return 0;
}
