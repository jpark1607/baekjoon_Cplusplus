#include <stdio.h>

int main(void) {
	int T, i;
	int tot, peo;
	
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d %d", &tot, &peo);
		printf("You get %d piece(s) and your dad gets %d piece(s).\n", tot / peo, tot % peo);
	}
	return 0;
}
