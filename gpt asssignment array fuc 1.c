#include <stdio.h>

int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

int main() {
    int arr[] = {5, 7, 2, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Maximum number is %d\n", findMax(arr, n));
    return 0;
}

