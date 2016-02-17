#include <stdio.h>

int main(void) {
	char cArr[100];
	int i;
	scanf("%s", cArr);
	
	for(i = 0; cArr[i] != '\0'; i++) {
		if(cArr[i] < 91) {
			cArr[i] += 32;
		}
		else {
			cArr[i] -= 32;
		}
	}
	
	printf("%s", cArr);
	return 0;
}
