#include <stdio.h>
 
int main(){
	int N;
	int i, j;
	
	scanf("%d", &N);
	for(i = 0; i < N - 1; i++) {
		printf(" ");
	} printf("*");
	printf("\n");
	
	for(i = 1; i < N; i++) {
		for(j = N - 1; j > i; j--) {
			printf(" ");
		} printf("*");
		
		for(j = 0; j < i * 2 - 1; j++) {
			printf(" ");
		} printf("*");
		printf("\n");
	}
	
	return 0;
}
