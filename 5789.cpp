#include <stdio.h>
#include <string.h>

int main(void) {
	int N, i;
	char S[1010];
	int len;
	
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		scanf("%s", S);
		len = strlen(S);
		
		if(S[len / 2 - 1] == S[len / 2])
			printf("Do-it");
		else
			printf("Do-it-Not");
		
		printf("\n");
	}
    return 0;
}

