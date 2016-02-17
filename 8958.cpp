#include <stdio.h>

int main(void) {
	char ox[90] = "";
	int T, i, j;
	int total, plus;
	
	scanf("%d", &T);
	
	for(i = 0; i < T; i++) {
		total = 0;
		plus = 1;
		
		scanf("%s", ox);
		
		for(j = 0; ox[j]; j++) {
			if(ox[j] == 'O') {
				total += plus;
				plus += 1;
			}
			else if(ox[j] == 'X') {
				plus = 1;
			}
		}
		
		printf("%d\n", total);
	}
	return 0;
}
