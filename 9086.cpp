#include <stdio.h>
#include <string.h>

int main(void) {
	int T, i;
	char S[1010];
	int len;
	
	scanf("%d", &T);
	
	for(i = 0; i < T; i++) {
		scanf("%s", S);
		len = strlen(S);
		
		printf("%c%c\n", S[0], S[len - 1]);
	}
	
	return 0;
}
