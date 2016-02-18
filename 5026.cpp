#include <stdio.h>
#include <string.h>

int main(void) {
	int N, n;
	char S[10];
	int A, B;
	int len;
	int i, I;
	
	scanf("%d", &N);
	
	for(n = 0; n < N; n++) {
		scanf("%s", S);
		if(!strcmp(S, "P=NP")) {
			printf("skipped\n");
			continue;
		}
		
		len = strlen(S);
		A = 0;
		for(i = 0; S[i] != '+'; i++) {
			A *= 10;
			A += S[i] - 48;
		}
		I = i + 1;
		B = 0;
		for(i = I; i < len; i++) {
			B *= 10;
			B += S[i] -= 48;
		}
		
		printf("%d\n", A + B);
	}
	return 0;
}

