#include<stdio.h>

int main(void)
{
    int marks[3] [3]  = {
        {80, 75, 90},
        {60, 70, 65},
        {88, 92, 79}
    };

    int i , j ;
    int total ;

    for (i = 0 ; i< 3; i++)
    {

        total = 0;
        for (j = 0; j < 3; j++)
        {
            total = total + marks[i][j];
        }
        printf("Total marks of student %d = %d\n", i , total);
    }

    return 0;
}