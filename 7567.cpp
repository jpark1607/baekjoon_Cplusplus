#include <stdio.h>
#include <string.h>

int main(void) {
	char bowl[60] = "";
	int h = 10;
	int len, i;
	char cur = ' ';
	
	scanf("%s", bowl);
	len = strlen(bowl);
	cur = bowl[0];
	for(i = 1; i < len; i++) {
		if(bowl[i] == cur)
			h += 5;
		else { 
			h += 10;
			cur = bowl[i];
		}
	}
	
	printf("%d", h);
	return 0;
}
