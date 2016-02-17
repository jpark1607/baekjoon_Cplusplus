#include <stdio.h>

int abs(int n) {
	if(n < 0)
		return -1 * n;
	else
		return n;
}
		
int main(void) {
	int nArr[10] = {0, };
	int i;
	int sum = 0;
	int max = 100;
	
	for(i = 0; i < 10; i++) {
		scanf("%d", &nArr[i]);
	}
	
	for(i = 0; i < 10; i++) {
		sum += nArr[i];
		if(max > abs(100 - sum))
			max = abs(100 - sum);
		else if(max == abs(100 - sum)) {
			i += 1;
			break;
		}
		else {
			sum -= nArr[i];
			break;
		}
	}
	printf("%d", sum);
	return 0;
}
