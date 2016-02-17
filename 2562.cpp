#include <stdio.h>

int main(void) {
	int i;
	int nMax = 0, pMax = 0;
	int nCur;
	
	for(i = 1; i < 10; i++) {
		scanf("%d", &nCur);
		if(nCur > nMax) {
			pMax = i;
			nMax = nCur;
		}
	}
	
	printf("%d\n%d", nMax, pMax);
	return 0;
}
