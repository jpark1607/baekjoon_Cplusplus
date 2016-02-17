#include <stdio.h>

int main(void) {
	int T, i, j;
	int num, even, min;
	
	scanf("%d", &T);
	
	for(i = 0; i < T; i++) {
		even = 0;
		min = 100;
		for(j = 0; j < 7; j++) {
			scanf("%d", &num);
			if(num % 2 == 0) {
				even += num;
				if(num < min)
					min = num;
			}
		}

		printf("%d %d\n", even, min);
	}
	return 0;
}
