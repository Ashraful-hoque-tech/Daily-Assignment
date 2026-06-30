//Write a program to Merge two sorted arrays.

#include <stdio.h>

int main() {
    int a[100], b[100], merged[200];
    int n1, n2, i, j, k;

    // Input size of first array
    printf("Enter number of elements in first sorted array: ");
    scanf("%d", &n1);

    printf("Enter elements of first sorted array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    // Input size of second array
    printf("Enter number of elements in second sorted array: ");
    scanf("%d", &n2);

    printf("Enter elements of second sorted array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    i = j = k = 0;

    // Merge arrays
    while(i < n1 && j < n2) {
        if(a[i] <= b[j]) {
            merged[k++] = a[i++];
        } else {
            merged[k++] = b[j++];
        }
    }

    // Copy remaining elements of first array
    while(i < n1) {
        merged[k++] = a[i++];
    }

    // Copy remaining elements of second array
    while(j < n2) {
        merged[k++] = b[j++];
    }

    // Display merged array
    printf("Merged sorted array:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }

    return 0;
}