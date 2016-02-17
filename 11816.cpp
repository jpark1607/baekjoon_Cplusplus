#include <stdio.h>
#include <string.h>

int main(void) {
	char X[8];
	int len;
	int i;
	int mul = 1;
	int sum = 0;
	
	scanf("%s", X);
	len = strlen(X);
	
	if(X[0] == '0' && X[1] == 'x') {
		for(i = len - 1; i > 1; i--) {
			if(X[i] >= 97 && X[i] <= 102) {
				sum += (X[i] - 87) * mul;
				mul *= 16;
			}
			else {
				sum += (X[i] - 48) * mul;
				mul *= 16;
			}
		}
	}
	else if(X[0] == '0' && X[1] != 'x') {
		for(i = len - 1; i > 0; i--) {
			sum += (X[i] - 48) * mul;
			mul *= 8;
		}
	}
	else if(X[0] != 0) {
		for(i = len - 1; i >= 0; i--) {
			sum += (X[i] - 48) * mul;
			mul *= 10;
		}
	}
	
	printf("%d", sum);
	return 0;
}
