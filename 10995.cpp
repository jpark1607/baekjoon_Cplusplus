#include <stdio.h>
 
int main(){
	int N;
	int i, j;
	scanf("%d", &N);
	
	for(i = 0; i < N; i++) {
		if(i % 2 == 1)
			printf(" ");
		for(j = 0; j < N; j++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
