#include <stdio.h>

int main(void) {
	int pos[3][2] = {0, };
	int X, Y;
	int i;
	
	for(i = 0; i < 3; i++) {
		scanf("%d %d", &pos[i][0], &pos[i][1]);
	}
	
	if(pos[0][0] == pos[1][0]) {
		X = pos[2][0];
	}
	else if(pos[0][0] == pos[2][0]) {
		X = pos[1][0];
	}
	else if(pos[1][0] == pos[2][0]) {
		X = pos[0][0];
	}
	
	if(pos[0][1] == pos[1][1]) {
		Y = pos[2][1];
	}
	else if(pos[0][1] == pos[2][1]) {
		Y = pos[1][1];
	}
	else if(pos[1][1] == pos[2][1]) {
		Y = pos[0][1];
	}
	
	printf("%d %d", X, Y);
	return 0;
}
