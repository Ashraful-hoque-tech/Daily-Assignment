//Write a program to union of arrays .

#include <stdio.h>

int main() {
    int arr1[100], arr2[100], unionArr[200];
    int n1, n2, i, j, k = 0;
    int isDuplicate;

    printf("Enter size of first array: ");
    scanf("%d", &n1);

    printf("Enter elements of first array:\n");
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    printf("Enter elements of second array:\n");
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // Add elements of first array
    for(i = 0; i < n1; i++) {
        unionArr[k++] = arr1[i];
    }

    // Add elements of second array if not already present
    for(i = 0; i < n2; i++) {
        isDuplicate = 0;

        for(j = 0; j < n1; j++) {
            if(arr2[i] == arr1[j]) {
                isDuplicate = 1;
                break;
            }
        }

        if(!isDuplicate) {
            unionArr[k++] = arr2[i];
        }
    }

    printf("Union of arrays:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", unionArr[i]);
    }

    return 0;
}