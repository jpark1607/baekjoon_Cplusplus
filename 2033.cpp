#include <stdio.h>

int main(void) {
	int N;
	int dec = 10;
	
	scanf("%d", &N);
	
	while(N > dec) {
		if((N % dec) >= (dec / 2)) {
			N -= N % dec;
			N += dec;
		}
		else {
			N -= N % dec;
		}
		dec *= 10;
	}
	
	printf("%d", N);
	return 0;
}
