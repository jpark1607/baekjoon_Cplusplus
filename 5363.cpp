#include <stdio.h>
#include <string.h>

int main(void) {
	char S[110];
	int N, n;
	int pos, space, count;
	int len, i;
	
	scanf("%d", &N);
	while(getchar() != '\n');
	for(n = 0; n < N; n++) {
		count = 0;
		gets(S);
		len = strlen(S);
		for(i = 0; i < len; i++) {
			if(S[i] == ' ')
				count += 1;
			if(count == 2) {
				space = i;
				break;
			}
		}
		for(i = space + 1; i < len; i++)
			printf("%c", S[i]);
		printf(" ");
		for(i = 0; i < space; i++)
			printf("%c", S[i]);
		printf("\n");
	}
	return 0;
}

