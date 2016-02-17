#include <stdio.h>
#include <math.h>

int main(void) {
	char c[21];
	int i;
	int sum = 0;
	int sumrt;
	int prime = 0;
	
	scanf("%s", c);
	for(i = 0; c[i]; i++) {
		c[i] -= 96;
		if(c[i] < 0) {
			c[i] += 58;
		}
		sum += c[i];
	}
	
	sumrt = sqrt(sum);
	
	for(i = 1; i <= sumrt; i++) {
		if(sum % i == 0) {
			prime += 1;
		}
	}
	
	if(prime == 1) {
		printf("It is a prime word.");
	}
	else {
		printf("It is not a prime word.");
	}
	return 0;
}


