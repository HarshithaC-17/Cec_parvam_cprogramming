#include <stdio.h>

int main(void) {
    int x;
    float y;
    printf("Enter integer and float: ");
    if (scanf("%d %f", &x, &y) == 2) {
        printf("You entered integer=%d and float=%.2f\n", x, y);
    } else {
        printf("Invalid input\n");
    }
    return 0;
}

