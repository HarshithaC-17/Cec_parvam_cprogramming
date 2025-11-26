#include <stdio.h>

int main(void) {
    char name[50];
    printf("Enter your name: ");
    if (fgets(name, sizeof(name), stdin) != NULL) { // safe read
        puts("Hello,");           // prints string with newline
        puts(name);               // prints entered name
    }
    return 0;
}
