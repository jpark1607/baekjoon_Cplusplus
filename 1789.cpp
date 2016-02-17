#include <stdio.h>
#include <math.h>
 
int main(void) {
    unsigned int S;
    unsigned int N;
    
	scanf("%u", &S);
     
    for(N = sqrt((double)S * 2); (S * 2) < ((N * N) + N); N--);
     
    printf("%u", N);
	
	return 0;
}
