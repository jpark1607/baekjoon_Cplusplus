#include <stdio.h>

int main(void) {
	int ki[11];
	int i = 0, j = 0;
	int allsum = 0;
	int minPos = 0, minNum = 0;
	int temp = 0;
	
	for(i = 0; i < 9; i++) {
		scanf("%d", &ki[i]);
	}
	for(i = 0; i < 9; i++) {
		allsum += ki[i];
	}
	
	for(i = 0; i < 8; i++) {
		for(j = i + 1; j < 9; j++) {
			if(allsum - ki[i] - ki[j] == 100)
				break;
		}
		if(allsum - ki[i] - ki[j] == 100)
			break;
	}
	ki[i] = 0, ki[j] = 0;
	for(i = 0; i < 8; i++) {
		minNum = ki[i];
		minPos = i;
		for(j = i + 1; j < 9; j++) {
			if(minNum > ki[j]) {
				minNum = ki[j];
				minPos = j;
			}
		}
		temp = ki[i];
		ki[i] = minNum;
		ki[minPos] = temp;
	}
	
	for(i = 2; i < 9; i++) {
		printf("%d\n", ki[i]);
	}
	
	return 0;
}
