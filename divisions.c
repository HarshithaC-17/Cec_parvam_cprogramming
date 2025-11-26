#include <stdio.h>

int main(void) {
    int a = 56, b = 9;
    printf("56/ 9(int) = %d\n", a / b);            // 2
    printf("56.0 / 9 (float) = %.2f\n", 56.0 / b);    // 2.25
    printf("(float)56 / 9 = %.2f\n", (float)a / b); // 2.25
    return 0;
}

