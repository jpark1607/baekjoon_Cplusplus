#include <stdio.h>
#include <string.h>
 
int main(void) {
    int n, i;
    char S[60];
    int len, j;
     
    scanf("%d", &n);
    for(i = 1; i <= n; i++) {
        scanf("%s", S);
        len = strlen(S);
        for(j = 0; j < len; j++) {
            S[j] += 1;
            if(S[j] == 91)
                S[j] = 65;
        }
        printf("String #%d\n", i);
        printf("%s\n\n", S);
    }
    return 0;
}
