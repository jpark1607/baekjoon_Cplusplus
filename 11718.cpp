#include <stdio.h>
#include <string.h>

int main(void) {
	char S[10001];
	
	while (fgets(S, 10000, stdin)) {
		printf("%s", S);
		memset(S, 0, sizeof(S));
	}
	
	return 0;
}
