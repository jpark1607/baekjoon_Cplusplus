#include <stdio.h>

int main(void) {
	int M, D, i;
	int sum = 4;
	char date[7][10] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
	
	scanf("%d %d", &D, &M);
	
	for(i = M - 1; i > 0; i--) {
		switch(i) {
		case 1: case 3: case 5: case 7: case 8: case 10:
			sum += 31;
			break;
		case 4: case 6: case 9: case 11:
			sum += 30;
			break;
		case 2:
			sum += 28;
			break;
		}
	}
	sum += D - 1;
	printf("%s", date[sum %= 7]);
	
	return 0;
}
