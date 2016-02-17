#include <stdio.h>
#include <string.h>

int main(void) {
	char Lpal[12], Rpal[12];
	int i, temp;
	int lenL, lenR;
	int check = 0;
	
	scanf("%s %s", Lpal, Rpal);
	lenL = strlen(Lpal);
	lenR = strlen(Rpal);
	
	if(lenL < lenR);
	else if(lenL == lenR) {
		for(i = 0; Lpal[i] == Rpal[i]; i++) {
			if(Lpal[i] == '8')
				check += 1;
		}
	}
	
	printf("%d", check);

	return 0;
}

