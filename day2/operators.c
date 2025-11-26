#include <stdio.h>

struct Person
{
    int age;
};

int main()

{
    int a = 10, b = 3;
    int x = 5;
    int arr [5]={10,20,30,40,50};

    printf("===BITWISE OPERATORS===\n");
    printf("a & b = %d\n", a & b);    // AND
    printf("a | b = %d\n", a | b);     //OR
    printf("a ^ b = %d\n", a ^ b);      //XOR
    printf("~a = %d\n", ~a);            //NOT
    printf("a << 1 = %d\n",a << 1);         //Left shift
    printf("a >> 1 = %d\n", a >> 1); // Right shift
    
    printf("\n=== ADDRESS-OF & VALUE-AT ===\n");
    int *ptr = &x;
    printf("Value of x = %d\n", x);
    printf("Address of x = %d\n", &x);
    printf("Value using pointer = %d\n", *ptr);

    printf("\n=== UNARY OPERATORS ===\n");
    printf("x++ = %d\n" , x++);
    printf("++x = %d\n" , ++x);
    printf("-x = %d\n", -x);

    printf("\n=== DOT OPERATOR ===\n");
    struct Person p ={25};
    printf("Person Age = %d\n", p.age);
    
    printf("\n=== SUBSCRIPT OPERATOR ===\n");
    printf("arr[2] = %d\n", arr[2]);

    return 0;


}
