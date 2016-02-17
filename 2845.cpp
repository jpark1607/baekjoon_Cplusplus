#include <stdio.h>

int main(void) {
	int L, P;
	int i;
	int aud;
	int news[5];
	
	scanf("%d %d", &L, &P);
	aud = L * P;
	for(i = 0; i < 5; i++) {
		scanf("%d", &news[i]);
		news[i] -= aud;
	}
	
	for(i = 0; i < 5; i++) {
		printf("%d ", news[i]);
	}
	
	return 0;
}
