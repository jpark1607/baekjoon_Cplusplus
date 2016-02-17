#include <stdio.h>
 
int main(){
	int N;
	int i;
	int cute[2] = {0, 0};
	int ch;
	
	scanf("%d", &N);
	for(i = 0; i < N; i++) {
		scanf("%d", &ch);
		cute[ch] += 1;
	}
	
	if(cute[0] > cute[1]) {
		printf("Junhee is not cute!");
	}
	else {
		printf("Junhee is cute!");
	}
	
    return 0;
}
