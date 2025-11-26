#include <stdio.h>

int sumArray(int *p, int n)
{
    int sum = 0;

    for (int i = 0; i < n ; i++)
    {
        sum = sum + *(p +i); 

    }
    return sum;

}

int main()
{
    int arr[5] = {1, 2,3,4, 5};

    int result = sumArray(arr ,5);

    printf("Sum of array = %d\n" ,result);

    return 0;
}