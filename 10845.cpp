#include <stdio.h>
#include <string.h>

int main(void) {
	char S[10];
	int N, i, X;
	int queue[10000] = {0, };
	int front = 0, back = 0;
	
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		scanf("%s", S);
		if(!strcmp(S, "push")) {
			scanf(" %d", &X);
			queue[back] = X;
			back += 1;
		}	
		else if(!strcmp(S, "pop")) {
			if(back > front) {
				printf("%d\n", queue[front]);
				queue[front] = 0;
				front += 1;
			}
			else
				printf("%d\n", -1);
		}
		else if(!strcmp(S, "size")) {
			printf("%d\n", back - front);
		}
		else if(!strcmp(S, "empty")) {
			if(front != back)
				printf("%d\n", 0);
			else
				printf("%d\n", 1);
		}
		else if(!strcmp(S, "front")) {
			if(front != back)
				printf("%d\n", queue[front]);
			else
				printf("%d\n", -1);
		}
		else if(!strcmp(S, "back")) {
			if(front != back)
				printf("%d\n", queue[back - 1]);
			else
				printf("%d\n", -1);
		}
	}
	return 0;
}


