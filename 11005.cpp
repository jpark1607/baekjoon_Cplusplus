#include <stdio.h>

int main(void) {
	int N, B;
	int nArr[30] = {0, };
	int i = 0, j = 0;
	
	scanf("%d %d", &N, &B);
	
	while(N > 0) {
		nArr[i] = N % B;
		N /= B;
		i += 1;
	}
	
	for(j = i - 1; j >= 0; j--) {
		if(nArr[j] > 9)
			printf("%c", (char)(nArr[j] + 55));
		else
			printf("%d", nArr[j]);
	}
	return 0;
}
