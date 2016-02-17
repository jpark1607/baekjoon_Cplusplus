#include <stdio.h>
#include <string.h>

int main(void) {
	char bArr[110];
	int eArr[40] = {0, };
	int len;
	int i, j;
	int X, bi = 1;
	
	scanf("%s", bArr);
	len = strlen(bArr);
	for(i = 0; i < len; i++) {
		bArr[i] -= 48;
	}
	
	X = len % 3;
	
	for(i = len - 1, j = 0; i >= X; i -= 3, j++) {
		eArr[j] = bArr[i] + bArr[i - 1] * 2 + bArr[i - 2] * 4;
	}
	
	for(i = X - 1; i >= 0; i--) {
		eArr[j] += bArr[i] * bi;
		bi *= 2;
	}
	if(X != 0) {
		len = len - X + 3;
	}
	len /= 3;
	
	for(i = len - 1; i >= 0; i--) {
		printf("%d", eArr[i]);
	}
	return 0;
}
