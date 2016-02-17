#include <stdio.h>
#include <string.h>

void swap(int *cup1, int *cup2) {
	int temp = *cup1;
	*cup1 = *cup2;
	*cup2 = temp;
}

int main(void) {
	int cup[3] = {1, 0, 0};
	char S[51];
	int len, i;
	
	scanf("%s", S);
	len = strlen(S);
	
	for(i = 0; i < len; i++) {
		switch(S[i]) {
		case 65:
			swap(&cup[0], &cup[1]);
			break;
		case 66:
			swap(&cup[1], &cup[2]);
			break;
		case 67:
			swap(&cup[0], &cup[2]);
			break;
		}
	}
	
	if(cup[0] == 1)
		printf("%d", 1);
	else if(cup[1] == 1)
		printf("%d", 2);
	else if(cup[2] == 1)
		printf("%d", 3);
		
	return 0;
}
