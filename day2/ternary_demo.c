#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers ");
    scanf("%d %d", &a , &b);

    int max = (a > b)  ? a : b;
    printf("Greater number is %d\n", max);

    return 0;
}