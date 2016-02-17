#include <stdio.h>

int main(void) {
	char S[100][21];
	int N, n;
	int i, j;
	
	scanf("%d", &N);
	for(n = 0; n < N; n++)
		scanf("%s", S[n]);
	
	for(i = 0; i < N; i++) {
		for(j = 0; S[i][j]; j++) {
			if(S[i][j] >= 65 && S[i][j] <= 90)
				S[i][j] += 32;
		}
	}
	
	for(n = 0; n < N; n++)
		printf("%s\n", S[n]);
	
	return 0;
}

