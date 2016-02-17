#include <stdio.h>

int main(void) {
    int N, i;
    char S[40];
    char c;
    scanf("%d", &N);
    c = getchar();
    for (i = 0; i < N; i++) {
        gets(S);
        if(S[0] > 96)
            S[0] -= 32;
        printf("%s\n", S);
    }
    
    return 0;
}
