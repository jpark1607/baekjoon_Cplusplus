#include <stdio.h>

int main(void) {
	char str[100] = "";
	int alpha[123];
	int i = 0;
	
	for(i = 97; i < 123; i++) {
		alpha[i] = -1;
	}
	scanf("%s", str);
	
	for(i = 0; str[i]; i++) {
		if(alpha[str[i]] == -1) {
			alpha[str[i]] = i;
		}
	}
	
	for(i = 97; i < 123; i++) {
		printf("%d ", alpha[i]);
	}
	
	return 0;
}
