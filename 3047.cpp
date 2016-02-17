#include <stdio.h>
#include <string.h>

void swap(int *n1, int *n2) {
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int main(void) {
	int num[3] = {0, };
	char out[4];
	int i, j;
	
	scanf("%d %d %d", &num[0], &num[1], &num[2]);
	scanf("%s", out);
	
	for(i = 0; i < 2; i++) {
		for(j = 1; j < 3; j++) {
			if(num[j - 1] > num[j])
				swap(&num[j - 1], &num[j]);
		}
	}
	
	for(i = 0; i < 3; i++) {
		printf("%d ", num[out[i] - 65]);
	}
	return 0;
}
