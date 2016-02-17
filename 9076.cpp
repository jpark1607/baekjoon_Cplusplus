#include <stdio.h>

void swap(int *n1, int *n2) {
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int main(void) {
	int T, i, j, k;
	int score[5];
	
	scanf("%d", &T);
	
	for(i = 0; i < T; i++) {
		for(j = 0; j < 5; j++) {
			scanf("%d", &score[j]);
		}
		
		for(j = 0; j < 4; j++) {
			for(k = 1; k < 5; k++) {
				if(score[k - 1] > score[k])
					swap(&score[k - 1], &score[k]);
			}
		}
		
		if(score[3] - score[1] >= 4)
			printf("KIN\n");
		else
			printf("%d\n", score[1] + score[2] + score[3]);
	}
	
	return 0;
}
