#include <stdio.h>

int main(void) {
	int n, i;
	int x, y;
	int Q1 = 0, Q2 = 0, Q3 = 0, Q4 = 0, AXIS = 0;
	scanf("%d", &n);
	
	for(i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		if(x == 0 || y == 0)
			AXIS += 1;
		else if(x > 0 && y > 0)
			Q1 += 1;
		else if(x < 0 && y > 0)
			Q2 += 1;
		else if(x < 0 && y < 0)
			Q3 += 1;
		else if(x > 0 && y < 0)
			Q4 += 1;
	}
	
	printf("Q1: %d\n", Q1);
	printf("Q2: %d\n", Q2);
	printf("Q3: %d\n", Q3);
	printf("Q4: %d\n", Q4);
	printf("AXIS: %d\n", AXIS);
	return 0;
}
