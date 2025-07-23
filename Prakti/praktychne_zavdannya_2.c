#include <stdio.h>

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return a / gcd(a, b) * b;
}

int main() {
    int p;
    scanf("%d", &p);
    long long x, res;
    scanf("%lld", &res);
    for (int i = 1; i < p; ++i) {
        scanf("%lld", &x);
        res = lcm(res, x);
    }
    printf("%lld\n", res);
    return 0;
} 