#include <stdio.h>
#include <math.h>
void swap(int *n1, int *n2) {
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int main(void) {
    int dice[3] = {0, 0, 0};
    int N, i, j, k;
    int sum = 0, max = 0;
    int num;
    int c;
    
    scanf("%d", &N);
    
    for(i = 0; i < N; i++) {
    	scanf("%d %d %d", &dice[0], &dice[1], &dice[2]);
    	for(j = 0; j < 2; j++) {
    		for(k = 1; k < 3; k++) {
    			if(dice[k - 1] > dice[k]) 
    				swap(&dice[k - 1], &dice[k]);
    		}
    	}
    	if(dice[0] == dice[1] && dice[1] == dice[2])
    		c = 3;
		else if(dice[0] == dice[1] || dice[1] == dice[2])
			c = 2;
		else
			c = 1;
		
		switch(c) {
		case 3:
			sum = 10000 + dice[0] * 1000;
			break;
		case 2:
			sum = 1000 + dice[1] * 100;
			break;
		case 1:
			sum = dice[2] * 100;
			break;
		}
		
		if(sum > max)
			max = sum;
    }
	
	printf("%d", max);
	return 0;
}
