#include <stdio.h>

int main(void) {
	int score;
	scanf("%d", &score);
	switch(score / 10) {
	case 10:
	case 9:
		printf("A");
		return 0;
	case 8:
		printf("B");
		return 0;
	case 7:
		printf("C");
		return 0;
	case 6:
		printf("D");
		return 0;
	default:
		printf("F");
		return 0;
	}
	
	return 0;
	
}
