#include <stdio.h>

int main(void) {
	int T, i, j;
	double N;
	char op[300] = "";
	scanf("%d", &T);
	
	for(i = 0; i < T; i++) {
		scanf("%lf ", &N);
		gets(op);
		for(j = 0; op[j] != '\0'; j++) {
			if(op[j] == '@')
				N *= 3;
			else if(op[j] == '%')
				N += 5;
			else if(op[j] == '#')
				N -= 7;
		}
		
		printf("%.2lf\n", N);
	}
	
	
	return 0;
}
