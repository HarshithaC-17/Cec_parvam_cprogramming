#include <stdio.h>
void bubbleSort(int arr[], int n) {
 for(int i = 0; i < n-1; i++) { // Outer loop: O(n)
 for(int j = 0; j < n-i-1; j++) { // Inner loop: O(n)
 if(arr[j] > arr[j+1]) { // Total: O(n²)
// Swap elements
int temp = arr[j]; arr[j] = arr[j+1];
arr[j+1] = temp;
}
}
}
}
void printArray(int arr[], int n) 
{ for(int i = 0; i < n; i++) {
printf("%d ", arr[i]);}
printf("\n"); 
}
int main() {
int arr[] = {64, 34, 25, 12, 22, 11, 90};
int n = 7;
printf("Original array: ");
printArray(arr, n);
bubbleSort(arr, n);
printf("Sorted array: ");
printArray(arr, n);
return 0;
} 