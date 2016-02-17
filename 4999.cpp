#include <stdio.h>
#include <string.h>

int main(void) {
	char me[1005] = "";
	char doc[1005] = "";
	int len1, len2;
	
	scanf("%s", me);
	scanf("%s", doc);
	len1 = strlen(me);
	len2 = strlen(doc);
	
	if(len1 < len2)
		printf("no");
	else 
		printf("go");
		
	return 0;
}
