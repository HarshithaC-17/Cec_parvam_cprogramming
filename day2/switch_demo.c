#include <stdio.h>

int main()
{
    int choice;
    printf("1. Add\n2. Subtract\n3. Multiply\nEnter choice;");
    scanf("%d",&choice);

    switch (choice)
    {
        case 1:
        printf("You selected ADD\n");
        break;
        case 2:
        printf("You selected SUBTRACT\n");
        break;
        case 3:
        printf("you selected MULTIPLY\n");
        break;
        default:
        printf("Invalid choice\n");
    }
    return 0;
}