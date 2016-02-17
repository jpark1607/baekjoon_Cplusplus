#include <stdio.h>

int main(void) {
    int N, i;
    int r, e, c;
    
    scanf("%d", &N);
    for(i = 0; i < N; i++) {
    	scanf("%d %d %d", &r, &e, &c);
    	if(e - c > r)
    		printf("advertise");
    	else if(e - c < r)
    		printf("do not advertise");
    	else
    		printf("does not matter");
    	
    	printf("\n");
    }
    
    return 0;
}
