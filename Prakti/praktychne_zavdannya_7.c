#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, r1, x2, y2, r2;
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);
    double dx = x2 - x1;
    double dy = y2 - y1;
    double d = sqrt(dx * dx + dy * dy);
    if (d == 0 && r1 == r2) {
        printf("-1\n"); // нескінченно багато точок
    } else if (d > r1 + r2 || d < fabs(r1 - r2)) {
        printf("0\n"); // не перетинаються
    } else if (fabs(d - (r1 + r2)) < 1e-8 || fabs(d - fabs(r1 - r2)) < 1e-8) {
        printf("1\n"); // дотикаються
    } else {
        printf("2\n"); // перетинаються у двох точках
    }
    return 0;
} 