#include <stdio.h>

int main(void) {
	char name[110] = "";
	int i;
	
	gets(name);
	
	for(i = 0; name[i]; i++) {
		if(name[i] >= 65 && name[i] <= 90) {
			printf("%c", name[i]);
		}
	}
	
	return 0;
}
