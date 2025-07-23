#include <stdio.h>

#define MOD 12345

int main() {
    int n;
    scanf("%d", &n);
    int dp0 = 1, dp1 = 1, dp2 = 0; // dp0: закінчується на 0, dp1: на одну 1, dp2: на дві 1
    for (int i = 2; i <= n; ++i) {
        int new_dp0 = (dp0 + dp1 + dp2) % MOD;
        int new_dp1 = dp0 % MOD;
        int new_dp2 = dp1 % MOD;
        dp0 = new_dp0;
        dp1 = new_dp1;
        dp2 = new_dp2;
    }
    int res = (dp0 + dp1 + dp2) % MOD;
    printf("%d\n", res);
    return 0;
} 