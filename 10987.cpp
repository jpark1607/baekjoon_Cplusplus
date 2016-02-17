#include <stdio.h>
#include <string.h>

int main(void) {
	char S[101];
	int i;
	int A[123] = {0, };
	int sum;
	// a = 97, e = 101, i = 105, o = 111, u = 117
	
	scanf("%s", S);
	for(i = 0; S[i]; i++) {
		A[S[i]] += 1;
	}
	
	sum = A[97] + A[101] + A[105] + A[111] + A[117];
	
	printf("%d", sum);
	
	return 0;
}

