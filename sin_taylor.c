#include <stdio.h>
#include "math_utils.h"   // import helper functions

int main() {
    int num;
    float ang;
    int i;
    float tay_sin = 0;

    scanf("%d %f", &num, &ang);
    ang = radian(ang);

    for (i = 0; i <= num; i++) {
        tay_sin = tay_sin + (power(-1, i) * (power(ang, 2*i+1) / factorial(2*i+1)));
    }

    printf("sin(%.2f) ≈ %.6f\n", ang, tay_sin);
    return 0;
}
