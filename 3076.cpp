#include <stdio.h>

int main(void) {
	int R, C, A, B;
	int r, c, a, b;
	
	scanf("%d %d", &R, &C);
	scanf("%d %d", &A, &B);
	
	for(r = 0; r < R; r++) {
		if(r % 2 == 0) {
			for(a = 0; a < A; a++) {
				for(c = 0; c < C; c++) {
					if(c % 2 == 0) {
						for(b = 0; b < B; b++) {
							printf("X");
						}
					}
					else {
						for(b = 0; b < B; b++) {
							printf(".");
						}
					}
				}
				printf("\n");
			}
		}
		else {
			for(a = 0; a < A; a++) {
				for(c = 0; c < C; c++) {
					if(c % 2 == 0) {
						for(b = 0; b < B; b++) {
							printf(".");
						}
					}
					else {
						for(b = 0; b < B; b++) {
							printf("X");
						}
					}
				}
				printf("\n");
			}
		}
	}
	
	return 0;
}
