#include<stdio.h>
int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;
    int pos = 2;

    for (int i = pos; i < size - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
    printf("Array after deletion:\n");
    for(int i = 0 ; i < size; i++)
    {
        printf ("%d\t", arr[i]);
    }
    return 0;
}