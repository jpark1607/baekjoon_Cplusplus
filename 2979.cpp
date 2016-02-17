#include <stdio.h>

int main(void) {
	int cArr[4] = {0, };
	int tArr[101] = {0, };
	int plus, minus, i;
	int sum = 0, last = 0;
	int pay = 0;
	
	cArr[0] = 0;
	scanf("%d %d %d", &cArr[1], &cArr[2], &cArr[3]);
	
	for(i = 0; i < 3; i++) {
		scanf("%d %d", &plus, &minus);
		tArr[plus] += 1;
		tArr[minus] -= 1;
		if(plus > last)
			last = plus;
		if(minus > last)
			last = minus;
	}
	
	for(i = 0; i <= last; i++) {
		pay += sum * cArr[sum]; 
		sum += tArr[i];
	}
		
	printf("%d", pay);
	return 0;
}
