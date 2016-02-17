#include <stdio.h>
#include <string.h>

int main(void) {
	char S[150] = "";
	int len, i;
	
	gets(S);
	len = strlen(S);
	
	for(i = 0; i < len; i++) {
		if(S[i] >= 'A' && S[i] <= 'M') {
			S[i] += 13;
		}
		else if(S[i] >= 'N' && S[i] <= 'Z') {
			S[i] -= 13;
		}
		else if(S[i] >= 'a' && S[i] <= 'm') {
			S[i] += 13;
		}
		else if(S[i] >= 'n' && S[i] <= 'z') {
			S[i] -= 13;
		}
	}

	printf("%s", S);
	return 0;
}
