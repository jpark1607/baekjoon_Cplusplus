#include <stdio.h>

int main(void) {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	if(A > B) {
		if(B > C) {
			printf("%d", B);
		}
		else {
			if(A > C) {
				printf("%d", C);
			}
			else {
				printf("%d", A);
			}
		}
	}
	else {
		if(A > C) {
			printf("%d", A);
		}
		else {
			if(B > C) {
				printf("%d", C);
			}
			else {
				printf("%d", B);
			}
		}
	}
	return 0;
	
}
