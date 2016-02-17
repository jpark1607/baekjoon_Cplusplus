#include <stdio.h>
#include <string.h>

int main(void) {
	int T, i, j, len, sum;
	char S[1001];
	int A[91] = {0, };
	
	scanf("%d", &T);
	
	for(i = 0; i < T; i++) {
		scanf("%s", S);
		
		len = strlen(S);
		sum = 0;
		for(j = 65; j < 91; j++)
			A[j] = 0;
		
		for(j = 0; j < len; j++) {
			A[S[j]] += 1;
		}
		
		for(j = 65; j < 91; j++) {
			if(A[j] == 0)
				sum += j;
		}
		
		printf("%d\n", sum);
	}
	return 0;
}
