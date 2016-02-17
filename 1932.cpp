#include <stdio.h>

int main(void) {
    int nArr[500][500];
    int n, i, j;
    int max = 0;
    
    scanf("%d", &n);
    
    for(i = 0; i < n; i++) {
    	for(j = 0; j <= i; j++) {
    		scanf("%d", &nArr[i][j]);
    	}
    }
    
    for(i = 1; i < n; i++) {
    	nArr[i][0] += nArr[i - 1][0];
    	nArr[i][i] += nArr[i - 1][i - 1];
    	
    	for(j = 1; j < i; j++) {
    		if(nArr[i - 1][j - 1] > nArr[i - 1][j])
    			nArr[i][j] += nArr[i - 1][j - 1];
    		else
    			nArr[i][j] += nArr[i - 1][j];
    	}
    }
    
    for(i = 0; i < n; i++) {
    	if(nArr[n - 1][i] > max)
    		max = nArr[n - 1][i];
    }
    
    printf("%d", max);
    return 0;
}
