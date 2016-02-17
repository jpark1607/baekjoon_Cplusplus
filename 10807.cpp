#include <stdio.h>

int main(void) {
	int N, v;
	int num[100];
	int i;
	int nCount = 0;
	
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		scanf("%d", &num[i]);
	}
	scanf("%d", &v);
	
	for(i = 0; i < N; i++) {
		if(num[i] == v)
			nCount++;
	}
	
	printf("%d", nCount);
	return 0;
}

