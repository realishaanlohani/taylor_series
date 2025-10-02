#include "math_utils.h"
// All functions I am using in taylor and sin
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
