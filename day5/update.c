#include<stdio.h>

int main()
{
    int arr [5] = { 10, 20, 30 ,40, 50};
    int pos = 1; // index to update
    int newvalue = 99;

    arr [pos]= newvalue; 

    printf("Array after update: \n");
    for(int i = 0; i < 5; i++)
    {
        printf("%d\t", arr[i]);
    }
    return 0;


}