#include <stdio.h>
#include <string.h>

int main(void) {
	char B1[110];
	char B2[110];
	int T, t;
	int len, i;
	int count;
	scanf("%d", &T);
	
	for(t = 0; t < T; t++) {
		scanf("%s", B1);
		scanf("%s", B2);
		len = strlen(B1);
		count = 0;
		for(i = 0; i < len; i++) {
			if(B1[i] != B2[i])
				count += 1;
		}
		
		printf("Hamming distance is %d.\n", count);
	}
	return 0;
}
