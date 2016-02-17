#include <stdio.h>

int main(void) {
	int T, t, i, j, k;
	int nArr[10] = {0, };
	int tCase[1000] = {0, };
	int temp;
	
	scanf("%d", &T);
	for(t = 0; t < T; ++t) {
		for(i = 0; i < 10; ++i) {
			scanf("%d", &temp);
			for(j = i - 1; j >= 0; --j) {
				if(temp > nArr[j])
					break;
			}
			j += 1;
			for(k = i; k > j; --k) {
				nArr[k] = nArr[k - 1];
			}
			nArr[j] = temp;
		}
		tCase[t] = nArr[7];
	}
	
	for(t = 0; t < T; ++t) {
		printf("%d\n", tCase[t]);
	}
	return 0;
}

