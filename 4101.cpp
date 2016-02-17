#include <stdio.h>

int main(void) {
	int A, B;
	
	scanf("%d %d", &A, &B);
	while(A != 0 && B != 0) {
		if(A > B)
			printf("Yes\n");
		else
			printf("No\n");
		scanf("%d %d", &A, &B);
	}
	
	return 0;
}

