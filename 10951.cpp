#include <stdio.h>
#include <string.h>

int main(void) {
	char N[10];
	int S;
	
	while (fgets(N, 9, stdin)) {
		S = N[0] + N[2] - 96;
		printf("%d\n", S);
		memset(N, 0, sizeof(N));
	}
	
	return 0;
}
