#include <stdio.h>

int main(void) {
	int A, B;
	int nData = 1;
	int nCount = 1;
	int temp = 1;
	int sumB = 0, sumA = 0;
	
	scanf("%d %d", &A, &B);
	
	while(nCount <= B) {
		sumB += nData;
		if(temp == nData) {
			nData += 1;
			temp = 1;
		}
		else {
			temp += 1;
		}
		
		nCount += 1;
	}
	
	nCount = 1;
	nData = 1;
	temp = 1;
	while(nCount < A) {
		sumA += nData;
		if(temp == nData) {
			nData += 1;
			temp = 1;
		}
		else {
			temp += 1;
		}
		
		nCount += 1;
	}
	printf("%d", sumB - sumA);
	return 0;
}
