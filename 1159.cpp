#include <stdio.h>


int main(void) {
	char name[150][30];
	int alpha[123] = {0, };
	int N, i;
	int check = 0;
	
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		scanf("%s", name[i]);
	}
	
	for(i = 0; i < N; i++) {
		alpha[name[i][0]] += 1;
	}
	
	for(i = 97; i < 123; i++) {
		if(alpha[i] >= 5) {
			printf("%c", i);
			check += 1;
		}
	}
	
	if(check == 0) {
		printf("PREDAJA");
	}
	
	return 0;
}

