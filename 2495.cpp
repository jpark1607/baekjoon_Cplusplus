#include <stdio.h>

int main(void) {
	char num[3][10];
	int i, j;
	char mid;
	int count, max;
	int res[3];
	
	for(i = 0; i < 3; i++) {
		scanf("%s", num[i]);
		count = 0;
		max = 0;
		mid = num[i][0];
		for(j = 1; num[i][j]; j++) {
			if(num[i][j] == mid) {
				count += 1;
				if(count > max) {
					max = count;
				}
			}
			else {
				mid = num[i][j];
				if(count > max) {
					max = count;
				}
				count = 0;
			}
		}
		res[i] = max + 1;
	}
	printf("%d\n%d\n%d", res[0], res[1], res[2]);
	return 0;
}
