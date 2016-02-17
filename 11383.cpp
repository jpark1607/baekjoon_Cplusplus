#include <stdio.h>
#include <string.h>

int main(void) {
	int N, M, n;
	char S[10][11];
	char P[21];
	char C[10][21];
	int len, i;

	scanf("%d %d", &N, &M);
	for(n = 0; n < N; n++)
		scanf("%s", S[n]);
	for(n = 0; n < N; n++)
		scanf("%s", C[n]);
		
	for(n = 0; n < N; n++) {
		len = strlen(S[n]);
		for(i = 0; i < len; i++) {
			P[2 * i] = S[n][i];
			P[2 * i + 1] = S[n][i];
		}
		P[2 * len] = NULL;
		if(strcmp(C[n], P)) {
			printf("Not Eyfa");
			return 0;
		}
	}
	printf("Eyfa");
	return 0;
}
