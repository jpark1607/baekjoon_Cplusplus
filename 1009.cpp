#include <stdio.h>

int main(void) {
	int T;
	int a, b;
	int i;
	
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d %d", &a, &b);
		a %= 10; b %= 4;
		switch(a) {
		case 0:
			printf("10\n");
			break;
		case 8:
			b = 4 - b;
			b %= 4;
		case 2:
			switch(b) {
			case 0:
				printf("6\n"); break; 
			case 1:
				printf("2\n"); break;
			case 2:
				printf("4\n"); break;
			case 3:
				printf("8\n"); break;
			}
			break;
		case 7:
			b = 4 - b;
			b %= 4;
		case 3:
			switch(b) {
			case 0:
				printf("1\n"); break; 
			case 1:
				printf("3\n"); break;
			case 2:
				printf("9\n"); break;
			case 3:
				printf("7\n"); break;
			}
			break;
		case 4:
			b %= 2;
			switch(b) {
			case 0:
				printf("6\n"); break;
			case 1:
				printf("4\n"); break;
			}
			break;
		case 9:
			b %= 2;
			switch(b) {
			case 0:
				printf("1\n"); break;
			case 1:
				printf("9\n"); break;
			}
			break;
		default:
			printf("%d\n", a);
			break;
		}
	}
		
	return 0;
}
