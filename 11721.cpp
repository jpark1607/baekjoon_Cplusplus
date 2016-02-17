#include <stdio.h>

int main(void) {
	char word[100] = "";
	int first = 0;
	int last = 10;
	int i = 0;
	
	scanf("%s", word);
	
	while(word[last]) {
		for(i = first; i < last; i++) {
			printf("%c", word[i]);
		}
		printf("\n");
		first += 10;
		last += 10;
	}
	for(i = first; word[i]; i++) {
		printf("%c", word[i]);
	}
	
	return 0;
}
