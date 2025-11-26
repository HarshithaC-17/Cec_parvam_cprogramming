#include <stdio.h>
#include <stdlib.h>
int main() {
 int *ptr1, *ptr2;
 // Allocate memory
ptr1 = malloc(8);
 // AƩempt to resize the memory
ptr2 = realloc(ptr1, 6
);
if (ptr2 == NULL) {
printf("Failed. Unable to resize memory");
} else {
printf("Success. 6 bytes reallocated at address %p \n", ptr2);
ptr1 = ptr2;
}
 // Free memory allocated by malloc or realloc
free(ptr1); 
return 0;
}
