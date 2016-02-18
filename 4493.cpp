#include <stdio.h>

int main(void) {
	int T, t, N, n;
	char P1, P2;
	int point1, point2;
	int i;
	
	scanf("%d", &T);
	while(getchar() != '\n');
	for(t = 0; t < T; t++) {
		scanf("%d", &N);
		while(getchar() != '\n');
		
		point1 = 0, point2 = 0;
		for(n = 0; n < N; n++) {
			scanf("%c %c", &P1, &P2);
			while(getchar() != '\n');
			
			switch(P1) {
			case 'R':
				switch(P2) {
				case 'S':
					point1 += 1;
					break;
				case 'P':
					point2 += 1;
					break;
				}
				break;
			case 'S':
				switch(P2) {
				case 'R':
					point2 += 1;
					break;
				case 'P':
					point1 += 1;
					break;
				}
				break;
			case 'P':
				switch(P2) {
				case 'R':
					point1 += 1;
					break;
				case 'S':
					point2 += 1;
					break;
				}
				break;
			}
		}
		if(point1 > point2)
			printf("Player 1\n");
		else if(point1 < point2)
			printf("Player 2\n");
		else
			printf("TIE\n");
	}
	return 0;
}
