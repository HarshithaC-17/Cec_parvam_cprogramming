#include<stdio.h>

int main(void)
{
    char names[3] [20] = {
        "Harshitha",
        "Chinnaswamy",
        "harshitha"};
        int i ;

        printf("List of names\n");

        for (i = 0; i < 3; i++)
        {
            printf("%s\n", names[i]);
        }
        return 0;
    }
