#include <stdio.h>
#include <string.h>

int main(void) {
	char S[1000];
	int len, i;
	gets(S);
	
	while(strcmp(S, "END")) {
		len = strlen(S);
		for(i = len - 1; i >= 0; i--) {
			printf("%c", S[i]);
		}
		printf("\n");
		gets(S);
	}
	return 0;
}
