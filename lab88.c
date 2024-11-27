#include <stdio.h>

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[5];
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int *ptr1 = arr1;
    int *ptr2 = arr2;
    for (int i = 0; i < n; i++) {
        *ptr2 = *ptr1;
        ptr1++;
        ptr2++;
    }
    printf("Copied array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    return 0;
}