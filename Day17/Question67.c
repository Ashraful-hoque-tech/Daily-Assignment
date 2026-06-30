//Write a program to intersection of arrays .

#include <stdio.h>

int main() {
    int arr1[100], arr2[100], intersection[100];
    int n1, n2, i, j, k = 0;
    int found;

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

    // Find intersection
    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {

                // Check for duplicates in result array
                found = 0;
                for(int x = 0; x < k; x++) {
                    if(intersection[x] == arr1[i]) {
                        found = 1;
                        break;
                    }
                }

                if(!found) {
                    intersection[k++] = arr1[i];
                }
                break;
            }
        }
    }

    printf("Intersection of arrays:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", intersection[i]);
    }

    return 0;
}