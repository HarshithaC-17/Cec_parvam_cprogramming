#include <stdio.h>

int main(void) {
    int a = 17, b = 2007;
    int intdiv = a / b;                    // integer division -> 2
    float floatdiv = (float)a / b;         // cast -> 2.5
    printf("intdiv = %d\n", intdiv);
    printf("floatdiv = %.2f\n", floatdiv);
    return 0;
}
