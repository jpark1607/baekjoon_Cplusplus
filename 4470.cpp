#include <stdio.h>

int main(void) {
	int T, t;
	char S[100];
	
	scanf("%d", &T);
	while(getchar() != '\n');
	for(t = 1; t <= T; t++) {
		gets(S);
		printf("%d. %s\n", t, S);
	}
	return 0;
}
