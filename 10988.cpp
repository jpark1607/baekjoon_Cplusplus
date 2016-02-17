#include <stdio.h>
#include <string.h>

int main(void) {
	char S[120] = "";
	int len;
	int i, K;
	
	scanf("%s", S);
	len = strlen(S);
	K = len / 2;
	
	for(i = 0; i < K; i++) {
		if(S[i] != S[len - 1 - i]) {
			printf("%d", 0);
			return 0;
		}
	}
	printf("%d", 1);
	return 0;
}
