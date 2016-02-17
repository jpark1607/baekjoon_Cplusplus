#include <stdio.h>

int main(void) {
	
	int x, y, w, h;
	int dx0, dx1, dy0, dy1;
	int min;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	
	dx0 = x; dx1 = w - x;
	dy0 = y; dy1 = h - y;
	
	min = dx0;
	if(dx1 < min)
		min = dx1;
	if(dy0 < min)
		min = dy0;
	if(dy1 < min)
		min = dy1;
		
	printf("%d", min);
	return 0;	
	
}
