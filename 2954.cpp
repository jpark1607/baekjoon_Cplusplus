#include <stdio.h>
#include <string.h>

int main(void) {
	char S[110] = "";
	int len, i;
	
	gets(S);
	len = strlen(S);
	
	for(i = 0; i < len; i++) {
		printf("%c", S[i]);
		if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
			i += 2;
	}
	
	return 0;
}
