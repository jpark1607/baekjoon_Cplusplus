#include <stdio.h>

int main(void) {
	int num;
	int i;
	int total = 0;
	for(i = 0; i < 5; i++) {
		scanf("%d", &num);
		total += (num * num);
	}
	total %= 10;
	
	printf("%d", total);
		
	return 0;
}
