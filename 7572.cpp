#include <stdio.h>

int main(void) {
	int sibgan[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	char sibiji[13] = "ABCDEFGHIJKL";
	int N;
	
	scanf("%d", &N);
	
	N -= 4;
	
	printf("%c%d", sibiji[N % 12], sibgan[N % 10]);
	
	return 0;
	
}
