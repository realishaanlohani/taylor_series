#include <stdio.h>
#include "math_utils.h"   // import helper functi>
int factorial(int a) {
    int i;
    int fac_a = 1;
    for (i = 1; i <= a; i++) {
        fac_a = fac_a * i;
    }
    return fac_a;
}

float radian(float degree) {
    return degree * (PI / 180.0);
}

float power(float base, int pnum) {
    float presult = 1.0;
    int i;
    for (i = 0; i < pnum; i++) {
        presult *= base;
    }
    return presult;
}

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

    printf("cos(%.2f) ≈ %.6f\n", ang, tay_cos);
    return 0;
}
