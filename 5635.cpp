#include <stdio.h>
#include <string.h>

int main(void) {
	int n, i, j;
	char name[20] = "";
	int birth[3] = {0, 0, 0};
	char maxS[20] = "";
	char minS[20] = "";
	int maxB[3] = {9999, 13, 32};
	int minB[3] = {0, 0, 0};
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++) {
		scanf("%s %d %d %d", name, &birth[2], &birth[1], &birth[0]);
		
		if(birth[0] > minB[0]) {
			for(j = 0; j < 3; j++) {
				minB[j] = birth[j];
			}
			strcpy(minS, name);
		}
		else if(birth[0] == minB[0]) {
			if(birth[1] > minB[1]) {
				for(j = 0; j < 3; j++) {
					minB[j] = birth[j];
				}
				strcpy(minS, name);
			}
			else if(birth[1] == minB[1]) {
				if(birth[2] > minB[2]) {
					for(j = 0; j < 3; j++) {
						minB[j] = birth[j];
					}
					strcpy(minS, name);
				}
			}
		}
		
		if(birth[0] < maxB[0]) {
			for(j = 0; j < 3; j++) {
				maxB[j] = birth[j];
			}
			strcpy(maxS, name);
		}
		else if(birth[0] == maxB[0]) {
			if(birth[1] < maxB[1]) {
				for(j = 0; j < 3; j++) {
					maxB[j] = birth[j];
				}
				strcpy(maxS, name);
			}
			else if(birth[1] == maxB[1]) {
				if(birth[2] < maxB[2]) {
					for(j = 0; j < 3; j++) {
						maxB[j] = birth[j];
					}
					strcpy(maxS, name);
				}
			}
		}	
	}
	
	printf("%s\n%s", minS, maxS);
	return 0;
}
