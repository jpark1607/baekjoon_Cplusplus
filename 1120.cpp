#include <stdio.h>
#include <string.h>

int main(void) {
	char c1[50], c2[50];
	int len1, len2;
	int dis;
	int i, j;
	int comp, min;
	scanf("%s", c1);
	scanf("%s", c2);
	len1 = strlen(c1);
	len2 = strlen(c2);
	dis = len2 - len1;
	min = len1;
	
	for(i = 0; i < dis + 1; i++) {
		comp = 0;
		for(j = 0; j < len1; j++) {
			if(c1[j] != c2[j + i]) {
				comp += 1;
			}
		}
		if(min > comp)
			min = comp;
	}
	
	printf("%d", min);
	
	return 0;
}
