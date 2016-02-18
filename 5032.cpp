#include <stdio.h>

int main(void) {
	int e, f, c;
	int tot = 0;
	
	scanf("%d %d %d", &e, &f, &c);
		
	while(e + f >= c) {
		e += f;
		f = 0;
		tot += e / c;
		f = e % c;
		e /= c;
	}
	
	printf("%d", tot);
	
	return 0;
}

