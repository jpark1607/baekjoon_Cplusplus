#include <stdio.h>

int main(void) {
	int n0, n1, n2, n3, n4;
	int idx = 1;
	
	scanf("%d", &n0);
	
	while(n0 != 0) {
		n1 = 3 * n0;
		
		if(n1 % 2 == 0) {
			printf("%d. even ", idx);
			n2 = n1 / 2;
		}
		else {
			printf("%d. odd ", idx);
			n2 = (n1 + 1) / 2;
		}
		
		n3 = 3 * n2;
		n4 = n3 / 9;
		
		printf("%d\n", n4);
		
		idx += 1;
		scanf("%d", &n0);
	}
	return 0;
}

