#include <stdio.h>

int main(void) {
	int dice[3];
	int i;
	int max = 0;
	
	for(i = 0; i < 3; i++) {
		scanf("%d", &dice[i]);
		if(max < dice[i])
			max = dice[i];
	}
	
	if(dice[0] == dice[1] && dice[0] == dice[2]) {
		printf("%d", 10000 + dice[0] * 1000);
	}
	else if(dice[0] == dice[1] || dice[0] == dice[2]) {
		printf("%d", 1000 + dice[0] * 100);
	}
	else if(dice[1] == dice[2]) {
		printf("%d", 1000 + dice[1] * 100);
	}
	else {
		printf("%d", max * 100);
	}
	
	return 0;
}
