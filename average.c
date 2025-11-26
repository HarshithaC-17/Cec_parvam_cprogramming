#include <stdio.h>

int main(void) {
    int a, b, c;
    printf("Enter three integers: ");
    if (scanf("%d %d %d", &a, &b, &c) == 3) {
        double avg = (a + b + c) / 3.0; // use 3.0 to force floating division
        printf("Average = %.2f\n", avg);
    } else {
        printf("Invalid input\n");
    }
    return 0;
}

