#include <stdio.h>

int main(void) {
    int a = 67, b = 17, temp;     // initial values
    printf("Before swap: a=%d b=%d\n", a, b);
    temp = a;                   // store a
    a = b;                      // assign b to a
    b = temp;                   // assign stored a to b
    printf("After swap: a=%d b=%d\n", a, b);
    return 0;
}
