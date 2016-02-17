#include <stdio.h>


int main(void) {
	char S[3];
	double score = 0.0;
	
	scanf("%s", S);

	switch(S[0]) {
	case 'A':
		score = 4.0;
		break;
	case 'B':
		score = 3.0;
		break;
	case 'C':
		score = 2.0;
		break;
	case 'D':
		score = 1.0;
		break;
	case 'F':
		score = 0.0;
		break;
	}
	
	switch(S[1]) {
	case '+':
		score += 0.3;
		break;
	case '-':
		score -= 0.3;
		break;
	case '0':
		break;
	}
	
	printf("%.1lf", score);
	return 0;
}

