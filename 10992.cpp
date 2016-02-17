#include <stdio.h>
 
int main(){
	int N;
	int i, j;
	
	scanf("%d", &N);
	for(i = 0; i < N - 1; i++) {
		printf(" ");
	} printf("*");
	printf("\n");
	
	for(i = 1; i < N - 1; i++) {
		for(j = N - 1; j > i; j--) {
			printf(" ");
		} printf("*");
		
		for(j = 0; j < i * 2 - 1; j++) {
			printf(" ");
		} printf("*");
		printf("\n");
	}
	if(N == 1)
		return 0;
		
	for(i = 0; i < N * 2 - 1; i++) {
		printf("*");
	}
	return 0;
}
