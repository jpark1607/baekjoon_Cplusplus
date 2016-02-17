#include <stdio.h>
 
int main(){
	int T, N, C;
	float G;
	int Csum;
	float Gsum, Gave;
	int i, j;
	
	scanf("%d", &T);
	for(i = 0; i < T; i++) {
		scanf("%d", &N);
		Csum = 0, Gsum = 0;
		for(j = 0; j < N; j++) {
			scanf("%d %f", &C, &G);
			Csum += C;
			Gsum += (float)C * G;
		}
		Gave = Gsum / (float)Csum;
		printf("%d %.1f\n", Csum, Gave);
	}
	
    return 0;
}
