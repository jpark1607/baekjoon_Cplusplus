#include <stdio.h>
#include <string.h>

int main(void) {
	char S[1001] = "";
	char C[1001] = "";
	int sArr[123] = {0, };
	int cArr[123] = {0, };
	int pos;
	int i;
	int comp;
	
	scanf("%s", S);
	scanf("%s", C);
	pos = 1;
	
	while(strcmp(S, "END") || strcmp(C, "END")) {
		for(i = 97; i < 123; i++) {
			sArr[i] = 0;
			cArr[i] = 0;
		}
		
		for(i = 0; S[i]; i++)
			sArr[S[i]] += 1;
		for(i = 0; C[i]; i++)
			cArr[C[i]] += 1;
		
		comp = 1;
		for(i = 97; i < 123; i++) {
			if(sArr[i] != cArr[i]) {
				comp = 0;
				break;
			}
		}
		
		if(comp)
			printf("Case %d: same\n", pos);
		else
			printf("Case %d: different\n", pos);
		
		pos += 1;
		scanf("%s", S);
		scanf("%s", C);
	}
	return 0;
}

