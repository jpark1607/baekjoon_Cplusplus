#include <stdio.h>

int main(void) {
	char S[1000002];
	int A[123] = {0, };
	int i;
	int max1 = 0, max2 = 0;
	int max = 0;
	
	scanf("%s", S);
	
	for(i = 0; S[i]; i++)
		A[S[i]] += 1;
		
	for(i = 97; i <= 122; i++)
		A[i - 32] += A[i];
	
	for(i = 65; i <= 90; i++) {
		if(A[i] > max1) {
			max1 = A[i];
			max2 = 0;
			max = i;
		}
		else if(A[i] == max1) {
			max2 = A[i];
		}
	}
	
	if(max1 == max2)
		printf("?");
	else
		printf("%c", (char)max);
		
	return 0;
}
