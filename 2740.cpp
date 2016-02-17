#include <stdio.h>

int main(void) {
	int arr_A[100][100];
	int arr_B[100][100];
	int arr_S[100][100];
	int N_A, M_A;
	int M_B, K_B;
	int i, j, k;
	
	scanf("%d %d", &N_A, &M_A);
	for(i = 0; i < N_A; i++) {
		for(j = 0; j < M_A; j++) {
			scanf("%d", &arr_A[i][j]);
		}
	}
	
	scanf("%d %d", &M_B, &K_B);
	for(i = 0; i < M_B; i++) {
		for(j = 0; j < K_B; j++) {
			scanf("%d", &arr_B[i][j]);
		}
	}
	
	for(i = 0; i < N_A; i++) {
		for(j = 0; j < K_B; j++) {
			for(k = 0; k < M_A; k++) {
				arr_S[i][j] += arr_A[i][k] * arr_B[k][j];
			}
		}
	}
	
	for(i = 0; i < N_A; i++) {
		for(j = 0; j < K_B; j++) {
			printf("%d ", arr_S[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
