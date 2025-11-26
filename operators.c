#include <stdio.h>

int main(void)
{
    int a = 10, b = 3;

    // Arithmetic
    printf("a + b = %d\n", a + b);  //  add :13
    printf("a - b = %d\n", a - b);  // subtract :7
    printf("a * b = %d\n", a * b);  //  multiply : 30
    printf("a / b = %d\n", a / b);  //  integer division:3
    printf("a %% b = %d\n", a % b);  // remainder : 1

    //Relational
    printf("a > b = %d\n", a > b);    // 1 (true)
    printf("a == b = %d\n", a == b); // 0 (false)

    //Logical (combine conditions)
    int cond = (a > 0) && (b > 0);     // both positive??
    printf("both positive = %d\n", cond); // 1

    return 0;
}

