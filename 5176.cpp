#include <stdio.h>

int main(void) {
    int K, i, j;
    int P, M, X;
    int seat[501] = {0, };
    int out;
    
    scanf("%d", &K);
    
    for(i = 0; i < K; i++) {
    	out = 0;
    	
    	scanf("%d %d", &P, &M);
    	
    	for(j = 0; j < P; j++) {
    		scanf("%d", &X);
    		seat[X] += 1;
    	}
    	
    	for(j = 1; j <= 500; j++) {
    		if(seat[j] > 0) {
    			out += seat[j] - 1;
    			seat[j] = 0;
    		}
    	}
    	
    	printf("%d\n", out);
    }
    
    return 0;
}
