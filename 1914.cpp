#include <stdio.h>

void HanoiTowerMove(int N, char from, char by, char to) {
	if(N == 1) {
		printf("%c %c\n", from, to);
	}
	else {
		HanoiTowerMove(N - 1, from, to, by);
		printf("%c %c\n", from, to);
		HanoiTowerMove(N - 1, by, from, to);
	}
}

int main(void) {
	int N = 0;
	int K[4] = {0, };
	int i = 0;
	int cas = 0;
	
	scanf("%d", &N);
	
	K[3] = 1;
	for(i = 0; i < N; i++) {
		K[3] *= 2;
	}
	cas = 1;
	
	if(N > 28 && N < 59) {
		for(i = 29; i < N; i++) {
			K[2] *= 2; K[3] *= 2;
			if(K[3] > 1000000000) {
				K[2] += 1; K[3] -= 1000000000;
			}
		}
		cas = 2;
	}
	
	if(N > 58 && N < 89) {
#include <stdio.h>

void HanoiTowerMove(int N, char from, char by, char to) {
	if(N == 1) {
		printf("%c %c\n", from, to);
	}
	else {
		HanoiTowerMove(N - 1, from, to, by);
		printf("%c %c\n", from, to);
		HanoiTowerMove(N - 1, by, from, to);
	}
}

int main(void) {
	int N = 0;
	int K[4] = {0, };
	int i = 0;
	
	K[3] = 1;
	scanf("%d", &N);
	
	if(N < 30) {
		for(i = 0; i < N; i++) {
			K[3] *= 2;
		}
		
		K[3] -= 1;
		printf("%d", K[3]);
	}
	else if(N < 60) {
		for(i = 0; i < 29; i++) {
			K[3] *= 2;
		}
		for(i = 29; i < N; i++) {
			K[2] *= 2;
			K[3] *= 2;
			if(K[3] > 1000000000) {
				K[3] -= 1000000000;
				K[2] += 1;
			}
		}
		K[3] -= 1;
		printf("%d", K[2]); printf("%09d", K[3]);
	}
	else if(N < 90) {
		for(i = 0; i < 29; i++) {
			K[3] *= 2;
		}
		for(i = 29; i < 59; i++) {
			K[2] *= 2; K[3] *= 2;
			if(K[3] > 1000000000) {
				K[3] -= 1000000000;
				K[2] += 1;
			}
		}
		for(i = 59; i < N; i++) {
			K[1] *= 2; K[2] *= 2; K[3] *= 2;
			if(K[3] > 1000000000) {
				K[3] -= 1000000000;
				K[2] += 1;
			}
			if(K[2] > 1000000000) {
				K[2] -= 1000000000;
				K[1] += 1;
			}
		}
		K[3] -= 1;
		printf("%d", K[1]); printf("%09d", K[2]);
		printf("%09d", K[3]);
	}
	else {
		for(i = 0; i < 29; i++) {
			K[3] *= 2;
		}
		for(i = 29; i < 59; i++) {
			K[2] *= 2; K[3] *= 2;
			if(K[3] > 1000000000) {
				K[3] -= 1000000000;
				K[2] += 1;
			}
		}
		for(i = 59; i < 89; i++) {
			K[1] *= 2; K[2] *= 2; K[3] *= 2;
			if(K[3] > 1000000000) {
				K[3] -= 1000000000;
				K[2] += 1;
			}
			if(K[2] > 1000000000) {
				K[2] -= 1000000000;
				K[1] += 1;
			}
		}
		for(i = 89; i < N; i++) {
			K[0] *= 2; K[1] *= 2; K[2] *= 2; K[3] *= 2;
			if(K[3] > 1000000000) {
				K[3] -= 1000000000;
				K[2] += 1;
			}
			if(K[2] > 1000000000) {
				K[2] -= 1000000000;
				K[1] += 1;
			}
			if(K[1] > 1000000000) {
				K[1] -= 1000000000;
				K[0] += 1;
			}
		}
		K[3] -= 1;
		printf("%d", K[0]); printf("%09d", K[1]);
		printf("%09d", K[2]); printf("%09d", K[3]);
	}

	if(N <= 20) {
		printf("\n");
		HanoiTowerMove(N, '1', '2', '3');
	}

	return 0;
}
		for(i = 59; i < N; i++) {
			K[1] *= 2; K[2] *= 2; K[3] *= 2;
			if(K[3] > 1000000000) {
				K[3] -= 1000000000;
				K[2] += 1;
			}
			if(K[2] > 1000000000) {
				K[2] -= 1000000000;
				K[1] += 1;
			}
		}
		K[3] -= 1;
		printf("%d", K[1]); printf("%09d", K[2]);
		printf("%09d", K[3]);
	}
	else {
		for(i = 0; i < 29; i++) {
			K[3] *= 2;
		}
		for(i = 29; i < 59; i++) {
			K[2] *= 2; K[3] *= 2;
			if(K[3] > 1000000000) {
				K[3] -= 1000000000;
				K[2] += 1;
			}
		}
		for(i = 59; i < 89; i++) {
			K[1] *= 2; K[2] *= 2; K[3] *= 2;
			if(K[3] > 1000000000) {
				K[3] -= 1000000000;
				K[2] += 1;
			}
			if(K[2] > 1000000000) {
				K[2] -= 1000000000;
				K[1] += 1;
			}
		}
		for(i = 89; i < N; i++) {
			K[0] *= 2; K[1] *= 2; K[2] *= 2; K[3] *= 2;
			if(K[3] > 1000000000) {
				K[3] -= 1000000000;
				K[2] += 1;
			}
			if(K[2] > 1000000000) {
				K[2] -= 1000000000;
				K[1] += 1;
			}
			if(K[1] > 1000000000) {
				K[1] -= 1000000000;
				K[0] += 1;
			}
		}
		K[3] -= 1;
		printf("%d", K[0]); printf("%09d", K[1]);
		printf("%09d", K[2]); printf("%09d", K[3]);
	}

	if(N <= 20) {
		printf("\n");
		HanoiTowerMove(N, '1', '2', '3');
	}

	return 0;
}
