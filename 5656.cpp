#include <stdio.h>
#include <string.h>

int main(void) {
	int a, b, comp;
	char c[3];
	int idx = 1;
	scanf("%d %s %d", &a, c, &b);
	
	while(strcmp(c, "E")) {
		if(!strcmp(c, ">")) {
			if(a > b)
				comp = 1;
			else
				comp = 0;
		}
		else if(!strcmp(c, ">=")) {
			if(a >= b)
				comp = 1;
			else
				comp = 0;
		}
		else if(!strcmp(c, "<")) {
			if(a < b)
				comp = 1;
			else
				comp = 0;
		}
		else if(!strcmp(c, "<=")) {
			if(a <= b)
				comp = 1;
			else
				comp = 0;
		}
		else if(!strcmp(c, "==")) {
			if(a == b)
				comp = 1;
			else
				comp = 0;
		}
		else if(!strcmp(c, "!=")) {
			if(a != b)
				comp = 1;
			else
				comp = 0;
		}
		printf("Case %d: ", idx);
		idx += 1;
		
		if(comp == 1)
			printf("true\n");
		else
			printf("false\n");
		
		scanf("%d %s %d", &a, c, &b);
	}
	
	return 0;
}
