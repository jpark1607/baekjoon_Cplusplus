#include <stdio.h>
#include <string.h>

int main(void) {
	char A[100], B[100];
	char oper;
	int lenA, lenB, i;
	int one = 1, zero = 0;
	int temp;
	
	scanf("%s %c %s", A, &oper, B);
	
	lenA = strlen(A) - 1;
	lenB = strlen(B) - 1;
	if(lenB > lenA) {
		temp = lenA;
		lenA = lenB;
		lenB = temp;
	}
	if(oper == '*') {
		printf("%d", one);
		for(i = 0; i < lenA + lenB; i++) {
			printf("%d", zero);
		}
	}
	else if(oper == '+') {
		if(lenA == lenB) {
			printf("%d", one + one);
			for(i = 0; i < lenA; i++) {
				printf("%d", zero);
			}
		}
		else {
			printf("%d", one);
			for(i = 0; i < lenA - lenB - 1; i++) {
				printf("%d", zero);
			}
			printf("%d", one);
			for(i = 0; i < lenB; i++) {
				printf("%d", zero);
			}
		}
	}
	return 0;
}
