#include <stdio.h>

int main(void) {
	int M, D;
	scanf("%d", &M);
	scanf("%d", &D);
	
	if(M < 2)
		printf("Before");
	else if(M > 2)
		printf("After");
	else {
		if(D < 18)
			printf("Before");
		else if(D > 18)
			printf("After");
		else
			printf("Special");
	}
	
	return 0;
}


