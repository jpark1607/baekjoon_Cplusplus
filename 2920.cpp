#include <stdio.h>

int main(void) {
	int mArr[8];
	int i;
	int asCheck = 0, desCheck = 0;
	
	for(i = 0; i < 8; i++) {
		scanf("%d", &mArr[i]);
	}
	
	for(i = 1; i < 8; i++) {
		if(mArr[i] - mArr[i - 1] == 1)
			asCheck += 1;
		else if(mArr[i] - mArr[i - 1] == -1)
			desCheck += 1;
		else
			break;
	}
	
	if(asCheck == 7) {
		printf("ascending");
	}
	else if(desCheck == 7) {
		printf("descending");
	}
	else {
		printf("mixed");
	}
	return 0;
}
