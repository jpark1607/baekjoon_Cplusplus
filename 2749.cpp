#include <stdio.h>

int mod = 1000000;
int p = 1500000;
int fibo[1500000] = {0, 1};

int main(void) {
    long long n;
    scanf("%lld", &n);
    for (int i = 2; i < p; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        fibo[i] %= mod;
    }
    printf("%d",fibo[n % p]);
    return 0;
}
