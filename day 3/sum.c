#include <stdio.h>
int sumArray(int arr[], int n) {
int sum = 0;
for(int i = 0; i < n; i++) { // Single loop: O(n)
sum += arr[i];
}
return sum;
}
int main()
{
int arr[] = {1, 2, 3, 4, 5};
int n = 5;
printf("Sum: %d\n", sumArray(arr, n));
}