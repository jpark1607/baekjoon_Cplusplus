#include <stdio.h>

int main(void) {
    int N, i, j;
    int nArr[11] = {0, };
    int num, pos, check;
    
    scanf("%d", &N);
    
    for(i = 0; i < N; i++) {
    	scanf("%d", &num);
    	check = 0;
    	pos = 0;
    	
    	while(check <= num) {
    		if(nArr[pos] == 0)
    			check += 1;
    		pos += 1;
    	}
    	
    	nArr[pos - 1] = i + 1;
    }
    
    for(i = 0; i < N; i++) {
    	printf("%d ", nArr[i]);
    }
    
    return 0;
}
