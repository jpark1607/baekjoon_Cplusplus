#include <stdio.h>
#include <string.h>

int main(void) {
	char S[210] = "";
	int i, len;
	int nArr[123] = {0, };
	int check;
	
	gets(S);
	
	while(strcmp(S, "*")) {
		len = strlen(S);
		check = 0;
		for(i = 97; i < 123; i++) 
			nArr[i] = 0;
			
		for(i = 0; i < len; i++)
			nArr[S[i]] += 1;
			
		for(i = 97; i < 123; i++) {
			if(nArr[i] == 0) {
				check += 1;
				break;
			}
		}
		
		if(check == 0)
			printf("Y\n");
		else
			printf("N\n");
		
		gets(S);
	}
		
    return 0;
}

