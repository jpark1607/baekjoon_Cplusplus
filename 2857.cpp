#include <stdio.h>
#include <string.h>

//F = 70, B = 66, I = 73
int main(void) {
	char S[15];
	int i, len;
	int nIndex = 1;
	int check = 0;
	
	while(nIndex <= 5) {
		gets(S);
		len = strlen(S);
		for(i = 0; i < len; i++) {
			if(S[i] == 70) {
				if(S[i + 1] == 66) {
					if(S[i + 2] == 73) {
						printf("%d ", nIndex);
						check += 1;
					}
				}
			}
		}
		nIndex += 1;
	}
	if(check == 0) {
		printf("HE GOT AWAY!");
	}
	return 0;
}
