#include <stdio.h>

/* fahr=0,20,...,300に対して摂氏-華氏対応表を印字する*/
main() {
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /* 温度表の下限 */
    upper = 300; /* 上限*/
    step = 20; /* きざみ */

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n",fahr, celsius);
        fahr = fahr + step;
    }
}