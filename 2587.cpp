#include <stdio.h>

int main(void) {
	int nArr[5];
	int i, j;
	int sum = 0, ave;
	int nMin, iMin;
	int temp;
	
	for(i = 0; i < 5; i++) {
		scanf("%d", &nArr[i]);
		sum += nArr[i];
	}
	
	for(i = 0; i < 4; i++) {
		nMin = nArr[i];
		iMin = i;
		for(j = i + 1; j < 5; j++) {
			if(nArr[j] < nMin) {
				nMin = nArr[j];
				iMin = j;
			}
		}
		if(iMin != i) {
			temp = nArr[i];
			nArr[i] = nMin;
			nArr[iMin] = temp;
		}
	}
	printf("%d\n%d", sum / 5, nArr[2]);
	
	return 0;
}
