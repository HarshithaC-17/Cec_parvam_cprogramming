#include <stdio.h>

int main(void) {
    int a = 7;
    double d = 3.14159265;
    printf("a=%05d\n", a);      // pad integer with zeros: 00007
    printf("pi=%.3f\n", d);     // 3 decimals: 3.142
    printf("scientific: %e\n", d); // scientific notation
    return 0;
}
