#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
	char S[10000];
	int T, t;
	int len;
	int i, j, I, J;
	
	scanf("%d", &T);
	for(t = 0; t < T; t++) {
		scanf("%s", S);
		len = strlen(S);
		J = sqrt(len) - 1;
		I = sqrt(len);
		for(j = J; j >= 0; j--) {
			for(i = j; i < len; i += I)
				printf("%c", S[i]);
		}
		printf("\n");
	}
	return 0;
}

