#include <stdio.h>

int main(void) {
	int T, i, j, k;
	int R;
	char S[25];
	char newS[200] = "";
	
	scanf("%d", &T);
	
	for(i = 0; i < T; i++) {
		
		scanf("%d %s", &R, S);
		for(j = 0; S[j]; j++) {
			for(k = j * R; k < (j + 1) * R; k++) {
				newS[k] = S[j];
			}
		}
		
		printf("%s\n", newS);
		for(j = 0; newS[j]; j++) {
			newS[j] = '\0';
		}
	}
	
	return 0;
}

