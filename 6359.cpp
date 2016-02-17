#include <stdio.h>
#include <string.h>

int main(void) {
	int T, i;
	int n, j, k;
	int nArr[100] = {0, };
	int open;
	scanf("%d", &T);
	
	for(i = 1; i <= T; i++) {
		scanf("%d", &n);
		for(j = 1; j <= n; j++)
			nArr[j] = 0;
		
		for(j = 1; j <= n; j++) {
			for(k = j; k <= n; k += j)
				nArr[k] += 1;
		}
		
		open = 0;
		for(j = 1; j <= n; j++) {
			if(nArr[j] % 2 == 1)
				open += 1;
		}
		
		printf("%d\n", open);
	}
    return 0;
}

