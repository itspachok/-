#include <stdio.h>
#include <math.h>

int min_steps(int x, int y) {
    int d = y - x;
    if (d == 0) return 0;
    int k = (int)sqrt(d);
    if (k * k == d) return 2 * k - 1;
    else if (k * k < d && d <= k * k + k) return 2 * k;
    else return 2 * k + 1;
}

int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d\n", min_steps(x, y));
    return 0;
} 