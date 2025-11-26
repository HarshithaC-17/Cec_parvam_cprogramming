#include <stdio.h>

int main()
{
    int i = 1;

    printf("FOR LOOP:\n");
    for (i = 1; i <= 5; i++)
    {
        printf("%d", i);
    }
    printf("\nWHILELOOP:\n");
    i = 1;
    while (i <= 5)
    {
        printf("%d" , i);
        i++;
    }

    printf("\nDO-WHILE LOOP:\n");
    i = 1;
    do
    {
        printf("%d",1);
        i++;
    } while(i <= 5);

    return 0;
}
