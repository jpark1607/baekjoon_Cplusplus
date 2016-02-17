#include <stdio.h>

int mod = 15746;
int p = 1000000;
int fibo[1000000] = {1, 1};

int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 2; i < p; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        fibo[i] %= mod;
    }
    printf("%d",fibo[n]);
    return 0;
}


