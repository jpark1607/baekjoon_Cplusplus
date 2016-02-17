#include <stdio.h>
int swap(int *pos1, int *pos2) {
	int temp = *pos1;
	*pos1 = *pos2;
	*pos2 = temp;
}

int main(void) {
	int cup[4] = {0, 1, 0, 0};
	int M, i;
	int p1, p2;
	
	scanf("%d", &M);
	for(i = 0; i < M; i++) {
		scanf("%d %d", &p1, &p2);
		swap(&cup[p1], &cup[p2]);
	}
	
	for(i = 1; i < 4; i++) {
		if(cup[i] == 1) {
			printf("%d", i);
		}
	}
	
	return 0;
}

