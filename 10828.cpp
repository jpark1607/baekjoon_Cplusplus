#include <stdio.h>
#include <string.h>

int main(void) {
	char S[10];
	int N, i, X;
	int stack[10000] = {0, };
	int cur = 0;
	
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		scanf("%s", S);
		if(!strcmp(S, "push")) {
			scanf(" %d", &X);
			stack[cur] = X;
			cur += 1;
		}	
		else if(!strcmp(S, "pop")) {
			if(cur > 0) {
				printf("%d\n", stack[--cur]);
				stack[cur] = 0;
			}
			else
				printf("%d\n", -1);
		}
		else if(!strcmp(S, "size")) {
			printf("%d\n", cur);
		}
		else if(!strcmp(S, "empty")) {
			if(cur > 0)
				printf("%d\n", 0);
			else
				printf("%d\n", 1);
		}
		else if(!strcmp(S, "top")) {
			if(cur > 0)
				printf("%d\n", stack[cur - 1]);
			else
				printf("%d\n", -1);
		}
	}
	return 0;
}


