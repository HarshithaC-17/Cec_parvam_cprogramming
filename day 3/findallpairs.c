#include <stdio.h>
void printAllPairs(int arr[], int n)
{ printf("All pairs:\n");
 for(int i = 0; i < n; i++) { // O(n)
 for(int j = i+1; j < n; j++) { // O(n)
 printf("(%d, %d)\n", arr[i], arr[j]); // O(n²)
} }
}
int main() {
    int arr[] = {1, 2, 3, 4};
int n = 4;
printAllPairs(arr, n);
return 0;
}