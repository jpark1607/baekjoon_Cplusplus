#include <stdio.h>

int main(void) {
	int N;
	int five = 0, three = 0;
	
	scanf("%d", &N);
	if(N == 4 || N == 7) {
		printf("%d", -1);
		return 0;
	}
	
	if(N % 3 == 0) {
		while(N >= 15) {
			N -= 15;
			five += 3;
		}
		three = N / 3;
	}
	else if(N % 3 == 1) {
		while(N - 10 >= 15) {
			N -= 15;
			five += 3;
		}
		while(N % 3 != 0) {
			N -= 5;
			five += 1;
		}
		three = N / 3;
	}
	else if(N % 3 == 2) {
		while(N - 5 >= 15) {
			N -= 15;
			five += 3;
		}
		while(N % 3 != 0) {
			N -= 5;
			five += 1;
		}
		three = N / 3;
	}
	
	printf("%d", five + three);
	return 0;
}

