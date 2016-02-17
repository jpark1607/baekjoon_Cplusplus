#include <stdio.h>
 
int main(){
	int score[8];
	int i, j, k;
	int total = 0;
	int other = 0;
	int min = 1200;
	int index[3];
	
	for(i = 0; i < 8; i++) {
		scanf("%d", &score[i]);
		total += score[i];
	}
	index[0] = 0, index[1] = 1, index[2] = 2;
	for(i = 0; i < 6; i++) {
		for(j = i + 1; j < 7; j++) {
			for(k = j + 1; k < 8; k++) {
				other = score[i] + score[j] + score[k];
				if(min > other) {
					min = other;
					index[0] = i; index[1] = j; index[2] = k;
				}
			}
		}
	}
	
	printf("%d\n", total - min);
	for(i = 0; i < 8; i++) {
		if(i == index[0] || i == index[1] || i == index[2])
			continue;
		printf("%d ", i + 1);
	}
	return 0;
}
