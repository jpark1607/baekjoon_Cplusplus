#include <stdio.h>

int main(void) {
	int i;
	int nMin = 100, nSum = 0;
	int nCur;
	
	for(i = 0; i < 7; i++) {
		scanf("%d", &nCur);
		if(nCur % 2 == 1) {
			nSum += nCur;
			if(nCur < nMin) {
				nMin = nCur;
			}
		}
	}
	if(nSum == 0)
		printf("%d", -1);
	else
		printf("%d\n%d", nSum, nMin);
	return 0;
}
