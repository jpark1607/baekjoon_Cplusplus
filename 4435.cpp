#include <stdio.h>

int main(void) {
	int T, t;
	int i;
	int teamG, teamS;
	int G[2][6] = {{1, 2, 3, 3, 4, 10}, {0, 0, 0, 0, 0, 0}};
	int S[2][7] = {{1, 2, 2, 2, 3, 5, 10}, {0, 0, 0, 0, 0, 0, 0}};
	
	scanf("%d", &T);
	for(t = 1; t <= T; t++) {
		teamG = 0, teamS = 0;
		for(i = 0; i < 6; i++)
			scanf("%d", &G[1][i]);
		for(i = 0; i < 7; i++)
			scanf("%d", &S[1][i]);
		
		for(i = 0; i < 6; i++)
			teamG += G[0][i] * G[1][i];
		for(i = 0; i < 7; i++)
			teamS += S[0][i] * S[1][i];
			
		printf("Battle %d: ", t);
		if(teamG > teamS)
			printf("Good triumphs over Evil\n");
		else if(teamG < teamS)
			printf("Evil eradicates all trace of Good\n");
		else
			printf("No victor on this battle field\n");
	}
	return 0;
}
