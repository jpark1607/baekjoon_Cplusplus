#include <stdio.h>

int main(void) {
	char S[101];
	int i;
	int A[123] = {0, };
	
	scanf("%s", S);
	for(i = 0; S[i]; i++) {
		A[S[i]] += 1;
	}
	
	for(i = 97; i < 123; i++) {
		printf("%d ", A[i]);
	}
	
	return 0;
}

