#include <stdio.h>

int main(void) {
	int T;
	char cArr[100];
	int passNum;
	int i, j;
	
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d %s", &passNum, cArr);
		for(j = 0; j < passNum - 1; j++) {
			printf("%c", cArr[j]);
		}
		for(j = passNum; cArr[j]; j++) {
			printf("%c", cArr[j]);
		}
		printf("\n");
	}
	
	return 0;
}
