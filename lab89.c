#include <stdio.h>
void array(int *arr1, int *arr2, int n) {
    int *ptr1 = arr1; 
    int *ptr2 = arr2 + n - 1; 
    for (int i = 0; i < n; i++) {
        *ptr2 = *ptr1; 
        ptr1++;
        ptr2--; 
    }
}
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[n]; 

    array(arr1, arr2, n);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    printf("Copied array with reversed order: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}