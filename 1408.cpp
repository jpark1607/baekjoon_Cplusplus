#include <stdio.h>

int main(void) {
	int time[3][3];
	int i;
	scanf("%d:%d:%d", &time[0][0], &time[1][0], &time[2][0]);
	scanf("%d:%d:%d", &time[0][1], &time[1][1], &time[2][1]);
	
	time[0][2] = time[0][1] - time[0][0];
	if(time[0][2] < 0) {
		time[0][2] += 24;
	}
	
	time[1][2] = time[1][1] - time[1][0];
	if(time[1][2] < 0) {
		time[1][2] += 60;
		time[0][2]--;
	}
	
	time[2][2] = time[2][1] - time[2][0];
	if(time[2][2] < 0) {
		time[2][2] += 60;
		time[1][2]--;
		if(time[1][2] < 0) {
			time[1][2] += 60;
			time[0][2]--;
		}
	}
	
	printf("%02d:%02d:%02d", time[0][2], time[1][2], time[2][2]);
	return 0;
}

