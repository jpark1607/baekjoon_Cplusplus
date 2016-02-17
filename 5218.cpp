#include <stdio.h>
#include <string.h>

int main(void) {
	char n1[25] = "", n2[25] = "";
	int d[25] = {0, };
	int T, i, j, len;
	
	scanf("%d", &T);
	
	for(i = 0; i < T; i++) {
		for(j = 0; j < 25; j++) {
			n1[j] = 0;
			n2[j] = 0;
			d[j] = 0;
		}
		
		scanf("%s %s", n1, n2);
		len = strlen(n1);
		
		for(j = 0; j < len; j++) {
			d[j] = n2[j] - n1[j];
			if(d[j] < 0)
				d[j] += 26;
		}
		
		printf("Distances: ");
		for(j = 0; j < len; j++) {
			printf("%d ", d[j]);
		}
		printf("\n");
	}
	
	return 0;
}
