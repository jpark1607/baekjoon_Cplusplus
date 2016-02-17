#include <stdio.h>

int main(void) {
	long long N;
	scanf("%lld", &N);
	
	if(N % 2 == 0)
		printf("CY");
	else
		printf("SK");
	return 0;
}
