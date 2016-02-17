#include <stdio.h>

int main(void) {
	int day;
	int num;
	int i;
	int nCount = 0;
	
	scanf("%d", &day);
	for(i = 0; i < 5; i++) {
		scanf("%d", &num);
		if(day == num)
			nCount += 1;
	}
	
	printf("%d", nCount);
	
	return 0;
}
