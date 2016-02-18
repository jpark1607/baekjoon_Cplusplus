#include <stdio.h>

int main(void) {
	int S;
	int N, temp;
	
	scanf("%d", &S);
	while(S != 0) {
		N = S;
		while(N > 9) {
			printf("%d ", N);
			temp = 1;
			while(N > 0) {
				temp *= (N % 10);
				N /= 10;
			}
			N = temp;
		}
		
		printf("%d\n", N);
		scanf("%d", &S);
	}
	return 0;
}
