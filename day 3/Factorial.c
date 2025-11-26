#include <stdio.h>
int factorial(int n) {
printf("Called factorial(%d), Stack depth increases\n", n);

if(n <= 1) {
printf("Base case reached, starƟng to return\n");
return 1;
}
 int result = n * factorial(n - 1);
printf("Returning from factorial(%d) = %d\n", n, result);
return result;
}
int main() {
int num = 5;
printf("CalculaƟng factorial of %d\n\n", num);
int result = factorial(num);
printf("\nFinal result: %d\n", result);
return 0;
}
