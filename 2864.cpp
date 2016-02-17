#include <stdio.h>
#include <string.h>

void setArr(char arr[8], int len) {
	int i, j;
	j = 7 - len;
	for(i = len; i >= 0; i--) {
		arr[i] -= 48;	
		arr[i + j] = arr[i];
	}
	for(i = 0; i < j; i++) {
		arr[i] = 'a';
	}
}

int maxLen(int lenA, int lenB) {
	if(lenA > lenB)
		return lenA;
	else
		return lenB;
}

int sumMinArr(char cAarr[8], char cBarr[8], int len) {
	int dec, i, res;
	
	dec = 1;
	res = 0;
	for(i = 6; i > 6 - len; i--) {
		if(cAarr[i] == 6) 
			cAarr[i] = 5;
		if(cBarr[i] == 6)
			cBarr[i] = 5;
		
		res += (cAarr[i] + cBarr[i]) * dec;
		dec *= 10;
	}
	
	return res;
}

int sumMaxArr(char cAarr[8], char cBarr[8], int len) {
	int dec, i, res;
	
	dec = 1;
	res = 0;
	for(i = 6; i > 6 - len; i--) {
		if(cAarr[i] == 5) 
			cAarr[i] = 6;
		if(cBarr[i] == 5)
			cBarr[i] = 6;
		
		res += (cAarr[i] + cBarr[i]) * dec;
		dec *= 10;
	}
	
	return res;
}
	
int main(void) {
	char cAarr[8], cBarr[8];
	int lenA, lenB, lenMax, i, j, min, max;
	
	scanf("%s %s", cAarr, cBarr);
	
	lenA = strlen(cAarr);
	lenB = strlen(cBarr);
	setArr(cAarr, lenA);
	setArr(cBarr, lenB);
	lenMax = maxLen(lenA, lenB);
	min = sumMinArr(cAarr, cBarr, lenMax);
	max = sumMaxArr(cAarr, cBarr, lenMax);
	printf("%d %d", min, max);
	return 0;
}
