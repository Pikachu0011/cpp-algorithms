#include <stdio.h>
#include <stdlib.h>

#define MOD 998244353

// 计算幂取模函数
long long power_mod(long long base, long long exponent, long long modulus) {
    long long result = 1;
    base =  base % modulus;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (result * base) % modulus;
        }
        exponent = exponent >> 1;
        base = (base * base) % modulus;
    }
    return result;
}

int main() {
    long long fact[1000001];
    fact[1] = 1;
    for (int i = 2; i <= 1000000; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }

    int n;
    while (scanf("%d", &n) != EOF) {
        long long inv = power_mod(fact[2 * n + 1], MOD - 2, MOD);
        long long res = (fact[n] * fact[n] * inv) % MOD;
        printf("%lld\n", res);
    }
    return 0;
}
