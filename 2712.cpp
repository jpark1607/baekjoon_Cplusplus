#include <stdio.h>

double KGtoLB(double kg) {	
	return kg * 2.2046;
}

double LBtoKG(double lb) {
	return lb * 0.4536;
}

double GtoL(double g) {
	return g * 3.7854;
}

double LtoG(double l) {
	return l * 0.2642;
}

int main(void) {
	double val;
	char c[3];
	int T, i;
	
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%lf %s", &val, c);
		if(c[0] == 'k' && c[1] == 'g') {
			printf("%.4f lb", KGtoLB(val));
		}
		else if(c[0] == 'l' && c[1] == 'b') {
			printf("%.4f kg", LBtoKG(val));
		}
		else if(c[0] == 'g') {
			printf("%.4f l", GtoL(val));
		}
		else if(c[0] == 'l') {
			printf("%.4f g", LtoG(val));
		}
		printf("\n");
	}
	
	return 0;
}
