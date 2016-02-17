#include <stdio.h>
#include <string.h>

int main(void) {
	char bi[1000005];
	short oc[333340];
	int len, i, j, temp;
	
	scanf("%s", bi);
	len = strlen(bi);
	
	if(len % 3 != 0) {
		temp = 3 - (len % 3);
		for(i = len; i >= 0; i--) {
			bi[i + temp] = bi[i];
		}
		for(i = 0; i < temp; i++) {
			bi[i] = '0';
		}
		len += temp;
	}
	
	for(i = 0, j = 0; i < len; i += 3, j++) {
		oc[j] = (bi[i] - 48) * 4 + (bi[i + 1] - 48) * 2 + (bi[i + 2] - 48);
	}
	len /= 3;
	
	for(i = 0; i < len; i++) {
		printf("%d", oc[i]);
	}
	return 0;
}
