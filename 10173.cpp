#include <stdio.h>
#include <string.h>

//n = 78/110, e = 69/101, m = 77/109, o = 79/111
int main(void) {
	char S[170];
	int i, len;
	gets(S);
	int check = 0;
	
	while(strcmp(S, "EOI")) {
		check = 0;
		len = strlen(S);
		for(i = 0; i < len; i++) {
			if(S[i] == 78 || S[i] == 110) {
				if(S[i + 1] == 69 || S[i + 1] == 101) {
					if(S[i + 2] == 77 || S[i + 2] == 109) {
						if(S[i + 3] == 79 || S[i + 3] == 111) {
							check += 1;
							break;
						}
					}
				}
			}
		}
		if(check == 1) {
			printf("Found\n");
		}
		else if(check == 0) {
			printf("Missing\n");
		}
		gets(S);
	}
	return 0;
}
