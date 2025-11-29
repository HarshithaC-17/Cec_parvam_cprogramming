#include <stdio.h>

struct Example
{
    char a;
    int b;
    char c;
};

int main(void)
{
    printf("Size of struct Example = %lu\n", sizeof(struct Example));
    return 0;
}