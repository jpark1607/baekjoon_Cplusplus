#include <stdio.h>

int main(void) {
	int N, i, j;
	int nCheck;
	int nArr[123] = {0, };
	char S[110] = "";
	char cur;
	
	scanf("%d", &N);
	nCheck = N;
	
	for(i = 0; i < N; i++) {
		for(j = 97; j < 123; j++) {
			nArr[j] = 0;
		}
		
		scanf("%s", S);
		cur = S[0];
		
		for(j = 0; S[j]; j++) {
			if(cur != S[j] && nArr[S[j]] != 0) {
				nCheck -= 1;
				break;
			}
			else if(cur != S[j] && nArr[S[j]] == 0) {
				nArr[S[j]] += 1;
				cur = S[j];
			}
			else if(cur == S[j]) {
				nArr[S[j]] += 1;
			}
		}
	}
	
	printf("%d", nCheck);
	return 0;
}


