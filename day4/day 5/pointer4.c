#include <stdio.h>

struct Student 
{
    int age;
    float marks;

};

int main()
{

    int intVar = 10;
    float floatVar = 5.5;
    char charVar ='A';

    struct Student s1 ={20, 85.5};

    int *pInt = &intVar;
    float *pFloat =&floatVar;
    char *pChar = &charVar;
    struct Student *pStudent = &s1;

    printf("Integer via pointer = %d\n", *pInt);
    printf("Float via pointer = %.1f\n",*pFloat);
    printf("Char via pointer = %c\n", *pChar);
    printf("Student Age via pointer = %d\n", pStudent->age);
    printf("Student Marks via pointer = %.1f\n", pStudent->marks);

    return 0;
}