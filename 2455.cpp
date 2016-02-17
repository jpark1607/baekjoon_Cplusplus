#include <stdio.h>

int main(void) {
	int i;
	int out, in;
	int total = 0;
	int max = 0;
	
	for(i = 0; i < 4; i++) {
		scanf("%d %d", &out, &in);
		total = total - out + in;
		if(max < total) {
			max = total;
		}
	}
	
	printf("%d", max);
		
	return 0;
}
