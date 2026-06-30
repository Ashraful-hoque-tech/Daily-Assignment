//Write a program to find pair with given sum.

#include <stdio.h>

int main() {
    int arr[100], n, target, i, j;
    int found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the target sum: ");
    scanf("%d", &target);

    for(i = 0; i < n - 1; i++) {
        for(j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                printf("Pair found: %d and %d\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if(found == 0) {
        printf("No pair found.\n");
    }

    return 0;
}