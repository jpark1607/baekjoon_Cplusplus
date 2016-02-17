#include <stdio.h>

int main(void) {
	int V, i, j;
	char S[20];
	int A = 0, B = 0;
	
	scanf("%d", &V);
	
	scanf("%s", S);
	for(j = 0; j < V; j++) {
		if(S[j] == 'A')
			A += 1;
		else if(S[j] == 'B')
			B += 1;
	}
		
	if(A > B)
		printf("A");
	else if(B > A)
		printf("B");
	else
		printf("Tie");	
	
	return 0;
}

