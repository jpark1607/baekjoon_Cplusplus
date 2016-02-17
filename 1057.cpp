#include <stdio.h>

int main(void) {
    int N, K, L;
    int round;
    int b;
    
    scanf("%d %d %d", &N, &K, &L);
    
    K -= 1;
    L -= 1;
    round = 1;
    b = 2;
    while(K / b != L / b) {
    	round += 1;
    	b *= 2;
    }
    
    printf("%d", round);
    return 0;
}
