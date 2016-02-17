#include <stdio.h>

int main(void) {
	int pCount;
	int nArr[50];
	int i;
	int min, max;
	
	scanf("%d", &pCount);
	
	for(i = 0; i < pCount; i++) {
		scanf("%d", &nArr[i]);
	}
	
	min = nArr[0];
	max = nArr[0];
	
	for(i = 1; i < pCount; i++) {
		if(min > nArr[i])
			min = nArr[i];
		if(max < nArr[i])
			max = nArr[i];
	}
	printf("%d", min * max);
	return 0;
}

