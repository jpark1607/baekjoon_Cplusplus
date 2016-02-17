#include <stdio.h>
#include <string.h>
// CAMBRIDGE = 67 65 79 66 84 73 68 71 69

int main(void) {
	char S[110] = "";
	int i, len;
	
	scanf("%s", S);
	len = strlen(S);
	
	for(i = 0; i < len; i++) {	
		switch(S[i]) {
		case 'C':
		case 'A':
		case 'M':
		case 'B':
		case 'R':
		case 'I':
		case 'D':
		case 'G':
		case 'E':
			S[i] = 0;
			break;
		}
	}
		
	for(i = 0; i < len; i++) {
		if(S[i] == 0)
			continue;
		printf("%c", S[i]);
	}
	return 0;
}
