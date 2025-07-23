#include <stdio.h>

int main() {
    int p;
    scanf("%d", &p);
    if (p == 1) {
        printf("2\n");
        return 0;
    }
    if (p == 2) {
        printf("4\n");
        return 0;
    }
    // dp[i][j][k]: i - розряд, j - остання цифра (0:5, 1:9), k - скільки підряд (1 або 2)
    long long dp[31][2][3] = {0};
    dp[1][0][1] = 1; // 5
    dp[1][1][1] = 1; // 9
    for (int i = 2; i <= p; ++i) {
        for (int last = 0; last < 2; ++last) {
            for (int cnt = 1; cnt <= 2; ++cnt) {
                if (dp[i-1][last][cnt] == 0) continue;
                // Додаємо іншу цифру
                dp[i][1-last][1] += dp[i-1][last][cnt];
                // Додаємо таку ж, якщо не було ще 2 підряд
                if (cnt < 2)
                    dp[i][last][cnt+1] += dp[i-1][last][cnt];
            }
        }
    }
    long long res = 0;
    for (int last = 0; last < 2; ++last)
        for (int cnt = 1; cnt <= 2; ++cnt)
            res += dp[p][last][cnt];
    printf("%lld\n", res);
    return 0;
} 