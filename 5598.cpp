#include <stdio.h>
#include <string.h>

int main(void) {
	char S[1010] = "";
	int len, i;
	
	scanf("%s", S);
	len = strlen(S);
	
	for(i = 0; i < len; i++) {
		S[i] -= 3;
		if(S[i] < 65)
			S[i] += 26;
	}
		
	printf("%s", S);
	return 0;
}


