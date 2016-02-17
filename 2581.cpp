#include <stdio.h>
void Eratos(int m, int n) {
	bool* PrimeArray;
	int i, j;
	int sum, min;
	
	if(n == 1)
		return;

	PrimeArray = new bool[n + 1];
	
	for(i = 2; i <= n; i++) 
		PrimeArray[i] = true;
	
	for(i = 2; (i * i) <= n; i++) {
		if(PrimeArray[i]) {
			for(j = i * i; j <= n; j += i)
				PrimeArray[j] = false;
		}
	}
	
	sum = 0;
	for(i = n; i >= m; i--) {
		if(PrimeArray[i]) {
			sum += i;
			min = i;
		}
	}
	printf("%d\n%d", sum, min);
}

int main(){
	int M, N;
	scanf("%d %d", &M, &N);
	
	Eratos(M, N);
	
	return 0;
}
