#include <stdio.h>

int main(void) {
    int a, b, sum;                     // declare variables
    printf("Enter two integers: ");
    if (scanf("%d %d", &a, &b) == 2) { // read input, check success
        sum = a + b;                   // compute sum
        printf("Sum = %d\n", sum);     // print result
    } else {
        printf("Invalid input\n");
    }
    return 0;
}

