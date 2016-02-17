#include <stdio.h>
#include <math.h>
 
int main(void) {
    int M, N, rt_M, rt_N;
    int i;
	int sum = 0;
    
    scanf("%d", &M);
    scanf("%d", &N);
	rt_M = sqrt(M - 1) + 1;
	rt_N = sqrt(N);
	
	for(i = rt_M; i <= rt_N; i++)
		sum += i * i;

	if(sum == 0)
		printf("%d", -1);
	else
		printf("%d\n%d", sum, rt_M * rt_M);
	
	return 0;
}
