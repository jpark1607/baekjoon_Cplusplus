#include <stdio.h>

int main(void) {
	long long N, M;
	long long dis;
	
	scanf("%lld %lld", &N, &M);
	dis = N - M;
	
	if(dis < 0) 
		dis *= -1;
	
	
	printf("%lld", dis);
		
	return 0;
}

