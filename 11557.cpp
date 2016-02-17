#include <stdio.h>
#include <string.h>

int main(void) {
	int T, i;
	int N, j;
	char S[21];
	int L;
	char Smax[21];
	int Lmax;
	
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d", &N);
		Lmax = 0;
		for(j = 0; j < N; j++) {
			scanf("%s %d", S, &L);
			if(L > Lmax) {
				Lmax = L;
				strcpy(Smax, S);
			}
		}
		
		printf("%s\n", Smax);
	}
	
	return 0;
}

