#include <stdio.h>
#include "math_utils.h"   // import helper functi>

int main() {
    int num;
    float ang;
    int i;
    float tay_cos = 0;

    scanf("%d %f", &num, &ang);
    ang = radian(ang);

    for (i = 0; i <= num; i++) {
        tay_cos = tay_cos + (power(-1, i) * (power(ang, 2*i) / factorial(2*i))); //just changed the formula
    }

    printf("sin(%.2f) ≈ %.6f\n", ang, tay_cos);
    return 0;
}
