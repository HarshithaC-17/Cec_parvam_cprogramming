#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num)
    {
        printf("Non - Zero value treated as TRUE\n");
    }
    else
    {
        printf("Zero treated as FALSE\n");
    }

    if (num > 0)
    {
        if (num % 2 == 0)
        printf("Positive Even Number\n");
        else
        printf("Positive Odd Number\n");
    }
    else
    {
        printf("Number is zero or negative\n");
    }
    return 0;
}