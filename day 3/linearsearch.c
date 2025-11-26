#include <stdio.h>
int linearSearch(int arr[], int n, int key) 
{
 for(int i = 0; i < n; i++) { // O(n)
if(arr[i] == key) {
 return i; // Return index
}
}
 return -1; // Not found
}
int main() {
int arr[] = {10, 20, 30, 40, 50};
int n = 5, key = 30;
int result = linearSearch(arr, n, key);
if(result != -1)
printf("Element found at index: %d\n", result);
else
printf("Element not found\n");
return 0;
}