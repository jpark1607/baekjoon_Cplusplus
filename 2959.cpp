#include <stdio.h>

void swap(int *n1, int *n2) {
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int main(void) {
	int nArr[4];
	int i, j;
	
	for(i = 0; i < 4; i++) {
		scanf("%d", &nArr[i]);
	}
	
	for(i = 0; i < 3; i++) {
		for(j = 1; j < 4; j++) {
			if(nArr[j - 1] > nArr[j])
				swap(&nArr[j - 1], &nArr[j]);
		}
	}
	
	printf("%d", nArr[0] * nArr[2]);
				
	return 0;
}
