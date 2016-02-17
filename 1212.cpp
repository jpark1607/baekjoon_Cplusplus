#include <stdio.h>

int main(void) {
	char S[333334];
	int i;
	scanf("%s", S);
	
	switch(S[0]) {
		case 48:
			break;
		case 49:
			printf("1");
			break;
		case 50:
			printf("10");
			break;
		case 51:
			printf("11");
			break;
		case 52:
			printf("100");
			break;
		case 53:
			printf("101");
			break;
		case 54:
			printf("110");
			break;
		case 55:
			printf("111");
			break;
		}
	for(i = 1; S[i]; i++) {
		switch(S[i]) {
		case 48:
			printf("000");
			break;
		case 49:
			printf("001");
			break;
		case 50:
			printf("010");
			break;
		case 51:
			printf("011");
			break;
		case 52:
			printf("100");
			break;
		case 53:
			printf("101");
			break;
		case 54:
			printf("110");
			break;
		case 55:
			printf("111");
			break;
		}
	}
	return 0;
}
