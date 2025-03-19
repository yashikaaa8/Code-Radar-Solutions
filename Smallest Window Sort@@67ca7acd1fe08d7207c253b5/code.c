
 #include <stdlib.h>  
 int compare(const void *a, const void *b) {
     return (*(int*)a - *(int*)b);
 }
 
 int findUnsortedSubarray(int arr[], int n) {
     int sortedArr[n]; 
 
     for (int i = 0; i < n; i++) {
         sortedArr[i] = arr[i];
     }
 
 
     qsort(sortedArr, n, sizeof(int), compare);
 
 
     int left = 0;
     while (left < n && arr[left] == sortedArr[left]) {
         left++;
     }
 
     if (left == n) return 0;
 
     int right = n - 1;
     while (right > left && arr[right] == sortedArr[right]) {
         right--;
     }
 
     return right - left + 1;
 }

