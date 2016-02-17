#include <stdio.h>

int main(void) {
	char arr[5][15];
	int i, j;
	
	for(i = 0; i < 5; i++) {
		for(j = 0; j < 15; j++) {
			arr[i][j] = '\0';
		}
	}
	
	for(i = 0; i < 5; i++) {
		scanf("%s", arr[i]);
	}
	
	for(j = 0; j < 15; j++) {
		if(!arr[0][j] && !arr[1][j] && !arr[2][j] &&!arr[3][j] && !arr[4][j])
			return 0;
			
		for(i = 0; i < 5; i++) {
			if(arr[i][j] == '\0')
				continue;
			printf("%c", arr[i][j]);
		}
	}
	
	return 0;
}
