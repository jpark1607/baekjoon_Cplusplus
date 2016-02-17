#include <stdio.h>

int main(void) {

	int up, down, cur, pos, day;
	
	scanf("%d %d %d", &up, &down, &pos);
	cur = 0;
	day = 0;
	
	cur += up;
	day += 1;
	while(cur < pos) {
		cur -= down;
		cur += up;
		day += 1;
	}
	
	printf("%d", day);
	
	return 0;
}
