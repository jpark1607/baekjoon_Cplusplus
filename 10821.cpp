#include <stdio.h>

int main(void) {
	char S[1000];
	int i;
	int count = 1;
	
	scanf("%s", S);
	for(i = 0; S[i]; i++) {
		if(S[i] == ',')
			count += 1;
	}
	printf("%d", count);
	return 0;
}
