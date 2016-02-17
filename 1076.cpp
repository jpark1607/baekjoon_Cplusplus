#include <stdio.h>
#include <string.h>

int main(void) {
	char colors[10][10] = {"black", "brown", "red", "orange", "yellow",
							"green", "blue", "violet", "grey", "white"};
	char first[10], second[10], third[10];
	int i, j;
	long long val;
	
	scanf("%s", first);
	scanf("%s", second);
	scanf("%s", third);
	
	for(i = 0; i < 10; i++) {
		if(!strcmp(colors[i], first)) {
			val = i * 10;
			break;
		}
	}
	for(i = 0; i < 10; i++) {
		if(!strcmp(colors[i], second)) {
			val += i;
			break;
		}
	}
	for(i = 0; i < 10; i++) {
		if(!strcmp(colors[i], third)) {
			for(j = 0; j < i; j++) {
				val *= 10;
			}
			break;
		}
	}
	
	printf("%lld", val);
	return 0;
}
