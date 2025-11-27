#include<stdio.h>

struct Student
{
    int roll;
    float marks;
};

int main(void)
{
    struct Student s1;

    s1.roll = 101;
    s1.marks =89.5;

    printf("roll = %d\n", s1.roll);
    printf("Marks = %.2f\n", s1.marks);

    return 0;
}

