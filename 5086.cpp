#include <stdio.h>

int main(void) {
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    while(a != 0 && b != 0) {
    	if(b % a == 0)
    		printf("factor");
    	else if(a % b == 0)
    		printf("multiple");
    	else
    		printf("neither");
    	
    	printf("\n");
    	scanf("%d %d", &a, &b);
    }
    
    return 0;
}
