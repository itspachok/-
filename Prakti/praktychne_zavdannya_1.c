#include <stdio.h>

int main() {
    double t1, t2, t3;
    scanf("%lf %lf %lf", &t1, &t2, &t3);
    double v1 = 1.0 / t1;
    double v2 = 1.0 / t2;
    double v3 = 1.0 / t3;
    double v_total = v1 + v2 + v3;
    double result = 1.0 / v_total;
    printf("%.2lf\n", result);
    return 0;
} 