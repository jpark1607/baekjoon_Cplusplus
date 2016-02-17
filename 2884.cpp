#include <stdio.h>

int main(void) {
	int H, M;
	int time;
	
	scanf("%d %d", &H, &M);
	time = H * 60 + M;
	if(time < 45) {
		time += 1440;
	}
	time -= 45;
	
	H = time / 60;
	M = time % 60;
	
	printf("%d %d", H, M);
	
	return 0;
}
