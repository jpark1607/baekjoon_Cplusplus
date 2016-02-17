#include <stdio.h>
#include <string.h>

int main(void) {
	int alphabet[91] = {0, };
	char N[40] = "";
	int init = 0;
	int B, len;
	int i;
	int ch = 1, val = 0;
	
	for(i = 48; i < 58; i++) {
		alphabet[i] = init;
		init += 1;
	}
	for(i = 65; i < 91; i++) {
		alphabet[i] = init;
		init += 1;
	}
	
	scanf("%s", N);
	scanf("%d", &B);
	
	len = strlen(N);

	for(i = len - 1; i >= 0; i--) {
		val += alphabet[N[i]] * ch;
		ch *= B;
	}
	
	printf("%d", val);
	return 0;
}
