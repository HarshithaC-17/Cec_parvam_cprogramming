#include <stdio.h>
int findMax(int arr[], int n) {
int max = arr[0];
for(int i = 1; i < n; i++)
  { // O(n)
if(arr[i] > max) {
max = arr[i];
}

}
return max;
}
int main() {
int arr[] = {45, 12, 78, 23, 56};
int n = 5;
printf("Maximum: %d\n", findMax(arr, n));
return 0;
}



