#include <stdio.h>

int main()
{
    int arr[4] = {10, 20, 30, 40};

    int *ptr = arr; 

    for (int i = 0; i < 4;i++)
    {
        printf("arr[%d] = %d\n", i, *(ptr + i));
    }
    return 0;
}