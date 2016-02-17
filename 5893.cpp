#include <stdio.h>
#include <string.h>

int main(void) {
	char S[1100] = "";
	int i, len;
	
	scanf("%s", S);
	
	len = strlen(S);
	for(i = len - 1; i >= 0; i--)
		S[i + 5] = S[i] - 48;
	for(i = 0; i < 5; i++)
		S[i] = 0;
	len += 5;	
	
	for(i = 5; i < len; i++) {
		if(S[i] == 1)
			S[i - 4] += 1;
	}
	
	for(i = len - 1; i > 0; i--) {
		if(S[i] >= 2) {
			S[i - 1] += 1;
			S[i] -= 2;
		}
	}
	
	if(S[0] == 1)
		printf("%d", S[0]);
	for(i = 1; i < len; i++)
		printf("%d", S[i]);
		
    return 0;
}

