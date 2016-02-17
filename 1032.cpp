#include <stdio.h>
#include <string.h>

int main(void) {
	char name[60][60] = {"", };
	char check[60] = "";
	int N, i, j;
	int lenM, lenI;
	
	scanf("%d", &N);
	scanf("%s", name[0]);
	strcpy(check, name[0]);
	lenM = strlen(check);
	
	for(i = 1; i < N; i++) {
		scanf("%s", name[i]);
		
		for(j = 0; j < lenM; j++) {
			if(check[j] != name[i][j])
				check[j] = '?';
		}
		check[lenM] = '\0';
	}
	
	printf("%s", check);
	return 0;
}

