#include <stdio.h>

int main(void) {
	int B, G;
	
	scanf("%d %d", &B, &G);
	
	while(B != 0 || G != 0) {
		printf("%d\n", B + G);
		scanf("%d %d", &B, &G);
	}
	
	return 0;
}
