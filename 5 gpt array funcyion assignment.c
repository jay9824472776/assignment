#include <stdio.h>

void sort(int arr[], int n, int ascending) {
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - 1 - i; j++)
            if (ascending ? arr[j] > arr[j + 1] : arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
}

int main() {
    int arr1[] = {5, 3, 9, 1, 6}, arr2[] = {8, 7, 2, 10, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]), n2 = sizeof(arr2) / sizeof(arr2[0]);
    sort(arr1, n1, 1);  // Sort ascending
    sort(arr2, n2, 0);  // Sort descending
    printf("Sorted arr1 (asc): "); for (int i = 0; i < n1; i++) printf("%d ", arr1[i]);
    printf("\nSorted arr2 (desc): "); for (int i = 0; i < n2; i++) printf("%d ", arr2[i]);
    printf("\n");
    return 0;
}

