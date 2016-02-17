#include <stdio.h>
void Eratos(int m, int n) {
	bool* PrimeArray;
	int i, j;
	
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
	
	for(i = m; i <= n; i++) {
		if(PrimeArray[i]) {
			printf("%d\n", i);
		}
	}
}

int main(){
	int M, N;
	scanf("%d %d", &M, &N);
	
	Eratos(M, N);
	
	return 0;
}
