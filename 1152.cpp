#include <stdio.h>

int main(void) {
	char S[1000001];
	int nCount = 0;
	
	while(scanf("%d", S) != EOF) {
		scanf("%s", S);
		nCount += 1;
	}
	
	printf("%d", nCount);
	return 0;
}

