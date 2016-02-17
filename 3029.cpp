#include <stdio.h>

int main(void) {

	int H, M, S;
	int cur, pos;
	int take;
	
	scanf("%d:%d:%d", &H, &M, &S);
	cur = (((H * 60) + M) * 60) + S;
	
	scanf("%d:%d:%d", &H, &M, &S);
	pos = (((H * 60) + M) * 60) + S;
	
	take = pos - cur;
	if(take <= 0)
		take += 86400;
		
	H = take / 3600;
	take %= 3600;
	M = take / 60;
	take %= 60;
	S = take;
	
	printf("%02d:%02d:%02d", H, M, S);
	return 0;
}
