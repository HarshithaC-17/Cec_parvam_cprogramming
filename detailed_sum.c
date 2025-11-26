#include <stdio.h>            // 1: include standard IO functions

int main(void) {              // 2: main function - program entry
    int a, b, sum;            // 3: declare three integer variables

    printf("Enter two integers: "); // 4: prompt user
    if (scanf("%d %d", &a, &b) == 2) { // 5: read two integers; scanf returns number of items read
        sum = a + b;          // 6: compute sum
        printf("Sum = %d\n", sum); // 7: print the computed sum
    } else {                  // 8: error handling if input not valid
        printf("Invalid input\n"); // 9: inform the user
    }

    return 0;                 // 10: return success to OS
}
