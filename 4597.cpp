#include <stdio.h>
#include <string.h>

int main(void) {
	char S[40];
	char c;
	int i, len;
	int bit[2] = {0, };
	
	scanf("%s", S);
	while(strcmp(S, "#")) {
		bit[0] = 0, bit[1] = 0;
		
		len = strlen(S) - 1;
		for(i = 0; i < len; i++) {
			S[i] -= 48;
			bit[S[i]] += 1;
		}
		
		for(i = 0; i < len; i++)
			printf("%d", S[i]);
			
		if(S[len] == 'e'){
			if(bit[1] % 2 == 0)
				printf("%d", 0);
			else
				printf("%d", 1);
		}
		else {
			if(bit[1] % 2 == 0)
				printf("%d", 1);
			else
				printf("%d", 0);
		}
		printf("\n");
		scanf("%s", S);
	}
	return 0;
}
